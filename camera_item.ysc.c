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
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	bool bLocal_21 = false;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	bool bLocal_26 = false;
	int iLocal_27 = 0;
	bool bLocal_28 = false;
	bool bLocal_29 = false;
	int iLocal_30 = 0;
	var uLocal_31 = 0;
	char cLocal_32[32] = "";
	char cLocal_36[32] = "";
	char* sLocal_40 = NULL;
	char* sLocal_41 = NULL;
	char* sLocal_42 = NULL;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = false;
	struct<97> Local_52 = { 1, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1056964608, 1132462080, 1108082688, 1084227584, 1152319488, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 1056964608, 1056964608, 1056964608, 0, 0, 0, 0, 1061997773, 1091567616, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_149 = 0f;
	int iLocal_150 = 0;
	float fLocal_151 = 0f;
	bool bLocal_152 = false;
	int iLocal_153 = 0;
	vector3 vLocal_154 = { 0f, 0f, 0f };
	vector3 vLocal_157 = { 0f, 0f, 0f };
	vector3 vLocal_160 = { 0f, 0f, 0f };
	bool bLocal_163 = false;
	bool bLocal_164 = false;
	float fLocal_165 = 0f;
	float fLocal_166 = 0f;
	vector3 vLocal_167 = { 0f, 0f, 0f };
	bool bLocal_170 = false;
	int iLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	bool bLocal_179 = false;
	char* sLocal_180[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	bool bLocal_203 = false;
	float fLocal_204 = 0f;
	float fLocal_205 = 0f;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	sLocal_16 = "FACE_HUMAN@GEN_MALE@PORTRAIT";
	sLocal_17 = "facials@gen_male@portrait";
	StringCopy(&cLocal_32, "", 32);
	StringCopy(&cLocal_36, "", 32);
	sLocal_40 = "CameraViewfinder";
	sLocal_41 = "CameraTakePicture";
	sLocal_42 = "CameraTransitionBlink";
	bLocal_51 = true;
	fLocal_166 = 0f;
	fLocal_205 = 1056964608; /* Float: 0.5f */
	iLocal_207 = 4;
	iLocal_208 = -6.232038E-17f;
	iLocal_210 = -7.845416E+31f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
	{
		func_1(&Local_52, 0);
		func_2();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (bLocal_51)
	{
		if (iLocal_22 == 1)
		{
			func_3();
		}
		if (func_4(Local_52.f_1[2], 1))
		{
			if (MISC::IS_BIT_SET(Global_1958671, 5))
			{
				func_5(Local_52.f_1[2], 0, 1, 1);
			}
			else
			{
				func_5(Local_52.f_1[2], 1, 1, 1);
			}
		}
		if (func_4(Local_52.f_1[8], 1))
		{
			if (bLocal_203)
			{
				func_5(Local_52.f_1[8], 0, 1, 1);
			}
			else
			{
				func_5(Local_52.f_1[8], 1, 1, 1);
			}
		}
		func_6(2);
		func_6(4);
		func_6(8);
		func_6(16);
		func_6(32);
		func_6(1048576);
		func_6(32768);
		func_6(65536);
		func_6(128);
		func_6(256);
		func_6(512);
		func_6(1024);
		func_6(2048);
		func_6(4096);
		func_6(16384);
		func_6(1);
		PAD::DISABLE_CONTROL_ACTION(0, -1.684686E+34f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2.072734E+13f, false);
		if (bLocal_51)
		{
			if (func_7(&Local_52))
			{
				bLocal_51 = true;
			}
			else
			{
				bLocal_51 = false;
			}
		}
		func_8(Local_52);
		func_9(&Local_52);
		func_10(&(Local_52.f_73), &(Local_52.f_74), &(Local_52.f_77), &(Local_52.f_78), 3.013735E+08f, -2.794596E+37f, -6.00134E-14f, -1.422437E+11f, 2);
		if (func_11(Local_52.f_1[2], 1) || func_11(Local_52.f_1[7], 1))
		{
			iLocal_43 = 1;
			if (func_12(&Local_52) == 3)
			{
				func_13(&Local_52, 12);
			}
			else if (func_12(&Local_52) != 6)
			{
			}
			else
			{
				func_14();
				if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Collapse_Camera", Global_33, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("Collapse_Camera", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
				}
				iLocal_178 = MISC::GET_GAME_TIMER();
				bLocal_179 = true;
				func_15();
				Global_1958668 = 0;
				func_13(&Local_52, 4);
			}
		}
		func_16(&Local_52);
		iVar0 = func_12(&Local_52);
		if (func_17())
		{
		}
		func_18(&(Local_52.f_51));
		func_19(&(Local_52.f_51));
		switch (iVar0)
		{
			case 0:
				if (func_20())
				{
					iLocal_22 = 0;
					iLocal_30 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
					uLocal_31 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iLocal_30, "cameraRollCapacityLabel", "Disabled");
					func_21();
					func_13(&Local_52, 1);
				}
				else
				{
					if (func_22(&Local_52))
					{
						GRAPHICS::QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS();
						iLocal_22 = 1;
						func_23(&Local_52);
					}
					func_13(&Local_52, 1);
				}
				break;
			case 1:
				if (func_22(&Local_52))
				{
					func_24();
					func_23(&Local_52);
				}
				func_25();
				iLocal_18 = MISC::GET_GAME_TIMER();
				func_13(&Local_52, 2);
				break;
			case 2:
				if (func_22(&Local_52))
				{
					func_23(&Local_52);
				}
				if (func_26(iLocal_18) && func_27(Global_33, 1, 0, 0) == -230.1699f)
				{
					func_13(&Local_52, 3);
				}
				break;
			case 4:
				func_9(&Local_52);
				func_28();
				PAD::_SET_CONTROL_CONTEXT(5, 5.215156E-21f);
				if (bLocal_179)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_178) > 500)
					{
						HUD::_DISABLE_HUD_CONTEXT(0.0001674673f);
						CAM::SET_CAM_ACTIVE(Local_52.f_14, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DETACH_CAM(Local_52.f_14);
						CAM::DESTROY_CAM(Local_52.f_14, false);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_13(&Local_52, 3);
						func_29();
						bLocal_179 = false;
						func_30();
					}
				}
				break;
			case 3:
				PAD::_SET_CONTROL_CONTEXT(5, 5.215156E-21f);
				HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1.178511E+08f, "CAM_CONG_C", 1, 0, 0, 0);
				if ((MISC::GET_GAME_TIMER() - iLocal_171) > 100)
				{
					func_31();
					iLocal_171 = MISC::GET_GAME_TIMER();
				}
				if (func_22(&Local_52))
				{
					func_32(&Local_52);
					func_33(3);
					func_34(1);
					func_23(&Local_52);
				}
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
				if (iLocal_43 == 1 && Global_1958669 == 0)
				{
					if (PAD::IS_CONTROL_RELEASED(0, 4.85557E+33f))
					{
						iLocal_43 = 0;
					}
					else
					{
						iLocal_43 = 1;
					}
				}
				if (Global_1958669 == 1)
				{
					iLocal_43 = 0;
				}
				if (bLocal_170 && iLocal_43 == 0)
				{
					func_5(Local_52.f_1[0], 1, 1, 1);
					if (func_35(Local_52.f_1[0], 1) || Global_1958669 == 1)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
						PAD::DISABLE_CONTROL_ACTION(0, 3.013735E+08f, false);
						PAD::DISABLE_CONTROL_ACTION(0, -2.794596E+37f, false);
						if (Global_1958669 != 1)
						{
						}
						else
						{
							Global_1958669 = 0;
						}
						Global_1958668 = 1;
						func_15();
						HUD::_ENABLE_HUD_CONTEXT(0.0001674673f);
						func_36();
						iLocal_150 = MISC::GET_GAME_TIMER();
						func_13(&Local_52, 5);
					}
				}
				else
				{
					func_5(Local_52.f_1[0], 0, 1, 1);
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_153) > 600)
				{
					func_37();
					iLocal_153 = MISC::GET_GAME_TIMER();
				}
				if (bLocal_152)
				{
					func_5(Local_52.f_1[1], 1, 1, 1);
					if (func_35(Local_52.f_1[1], 1))
					{
						if (func_38(Global_33, 0))
						{
						}
						else
						{
							iLocal_175 = 0;
							iLocal_177 = 0;
							func_15();
							func_13(&Local_52, 8);
							if (!func_39(&uLocal_172))
							{
								func_40(&uLocal_172, 1);
							}
							if (!Local_52.f_95)
							{
								Local_52.f_95 = 1;
								PED::_0xC6136B40FFFB778B(Local_52.f_95);
							}
							if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Place_Tripod", Global_33, "CAMERA_SOUNDSET", -2))
							{
								AUDIO::PLAY_SOUND_FROM_ENTITY("Place_Tripod", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
							}
						}
					}
				}
				else
				{
					func_5(Local_52.f_1[1], 0, 1, 1);
				}
				break;
			case 5:
				if (func_22(&Local_52))
				{
					func_23(&Local_52);
				}
				func_28();
				if (func_41() && (MISC::GET_GAME_TIMER() - iLocal_150) > 500)
				{
					func_42();
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
					Local_52.f_52 = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
					Local_52.f_55 = { ENTITY::GET_ENTITY_ROTATION(Global_33, 2) };
					Local_52.f_67 = { Local_52.f_55, Local_52.f_55.f_1, Local_52.f_55.f_2 };
					Local_52.f_61 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_52.f_52, Local_52.f_55.f_2, 0f, 0.3f, 0.5f) };
					Local_52.f_93 = 0;
					Local_52.f_67 = { 0f, 0f, 0f };
					Local_52.f_66 = 0f;
					Local_52.f_65 = 0f;
					Local_52.f_14 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", Local_52.f_61, Local_52.f_67, 65f, false, 2);
					fLocal_149 = Local_52.f_55.f_2;
					if (func_43() != 0)
					{
						CAM::ATTACH_CAM_TO_PED_BONE(Local_52.f_14, Global_33, 21030, 0f, 0.2f, 0f, true);
					}
					else
					{
						CAM::ATTACH_CAM_TO_PED_BONE(Local_52.f_14, Global_33, 21030, 0f, 0.6f, 0f, true);
					}
					CAM::SET_CAM_NEAR_CLIP(Local_52.f_14, 0.25f);
					Local_52.f_15 = 5f;
					Local_52.f_15.f_1 = 2f;
					Local_52.f_15.f_2 = 1124073472; /* Float: 128f */
					Local_52.f_15.f_3 = 1103626240; /* Float: 25f */
					Local_52.f_15.f_4 = 1103626240; /* Float: 25f */
					Local_52.f_15.f_5 = 1114636288; /* Float: 60f */
					Local_52.f_15.f_6 = 1;
					Local_52.f_15.f_7 = 0;
					Local_52.f_15.f_8 = 1;
					Local_52.f_15.f_9 = 1;
					CAM::_0xE4B7945EF4F1BFB2(Local_52.f_14, &(Local_52.f_15));
					CAM::_PAUSE_CAMERA_FOCUS(Local_52.f_14, Local_52.f_93);
					CAM::ALLOW_MOTION_BLUR_DECAY(Local_52.f_14, false);
					CAM::SET_CAM_ACTIVE(Local_52.f_14, true);
					CAM::RENDER_SCRIPT_CAMS(true, true, 0, false, false, 0);
					if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Expand_Camera", Global_33, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY("Expand_Camera", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					func_37();
					iLocal_153 = MISC::GET_GAME_TIMER();
					func_30();
					GRAPHICS::_0x9F6D859C80708B26(true, false);
					func_13(&Local_52, 6);
				}
				break;
			case 6:
				CAM::_0x3C8F74E8FE751614();
				PAD::_SET_CONTROL_CONTEXT(4, 4.027491E+15f);
				if (iLocal_44 != 0)
				{
				}
				else if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
				{
					Global_1958670 = 1;
					iLocal_44 = 1;
				}
				if (MISC::IS_BIT_SET(Global_1958671, 6))
				{
				}
				else
				{
					HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1.178511E+08f, "CAM_CONG_HC", 1, 0, 0, 0);
				}
				if (func_22(&Local_52))
				{
					func_33(6);
					func_23(&Local_52);
				}
				func_44(&Local_52);
				if (iLocal_47 == 0)
				{
					if (func_45(Local_52.f_1[6]) && !func_46(&Local_52, 32))
					{
						func_32(&Local_52);
						if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Take_Photo", Global_33, "CAMERA_SOUNDSET", -2))
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY("Take_Photo", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
						}
						func_47(1);
						func_48(&Local_52, 32);
					}
					if (!func_46(&Local_52, 32))
					{
						if (func_45(Local_52.f_1[5]))
						{
							func_49();
						}
					}
				}
				break;
			case 11:
				if (func_22(&Local_52))
				{
					Local_52.f_1[6] = func_50("CAM_TAKE_PHOTO", 2.779732E-34f, Global_33, 1, 0, 0, 0, 0, 1.6f, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0, 0);
					func_34(1);
					func_51("CAM_SNAP", 0, 0, 1);
					func_23(&Local_52);
				}
				if (func_52())
				{
					if (!func_46(&Local_52, 16))
					{
						func_13(&Local_52, 3);
					}
					else
					{
						func_13(&Local_52, 13);
					}
				}
				else
				{
					func_53(&Local_52);
				}
				break;
			case 10:
				func_54(&Local_52);
				func_28();
				PAD::_SET_CONTROL_CONTEXT(5, 5.215156E-21f);
				iLocal_43 = 1;
				if (iLocal_176 == 0)
				{
					if (func_55(&uLocal_172) > 500)
					{
						if (CAM::DOES_CAM_EXIST(Local_52.f_14))
						{
							CAM::SET_CAM_ACTIVE(Local_52.f_14, false);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							CAM::DESTROY_CAM(Local_52.f_14, false);
						}
						if (func_56())
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
							ENTITY::SET_ENTITY_HEADING(Global_33, fLocal_204);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -230.1699f, true, 0, false, false);
						WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_33, true, true, true, false);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						func_29();
						iLocal_176 = 1;
					}
				}
				if (func_55(&uLocal_172) > 1000)
				{
					HUD::_DISABLE_HUD_CONTEXT(0.0001674673f);
					func_30();
					func_57(&uLocal_172);
					func_14();
					func_13(&Local_52, 3);
				}
				break;
			case 8:
				func_54(&Local_52);
				func_28();
				if (iLocal_175 != 0)
				{
				}
				else if (func_55(&uLocal_172) > 500)
				{
					WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_33, false, false, true, false);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_33, vLocal_154, fLocal_165, true, false, true);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
					func_42();
					bLocal_203 = false;
					iLocal_175 = 1;
				}
				if (iLocal_175 != 1)
				{
				}
				else if (iLocal_177 == 0)
				{
					if (func_55(&uLocal_172) > 300)
					{
						iLocal_177 = 1;
						func_58(&Local_52);
					}
				}
				else if (func_55(&uLocal_172) > 1000)
				{
					func_57(&uLocal_172);
					func_59(&Local_52);
					func_30();
					GRAPHICS::_0x9F6D859C80708B26(true, false);
					func_13(&Local_52, 9);
				}
				break;
			case 9:
				func_54(&Local_52);
				CAM::_0x3C8F74E8FE751614();
				if (Local_52.f_95)
				{
					Local_52.f_95 = 0;
					PED::_0xC6136B40FFFB778B(Local_52.f_95);
				}
				PAD::_SET_CONTROL_CONTEXT(4, 4.027491E+15f);
				HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1.178511E+08f, "CAM_CONG_HSP", 1, 0, 0, 0);
				if (func_22(&Local_52))
				{
					func_23(&Local_52);
				}
				func_59(&Local_52);
				if (func_35(Local_52.f_1[6], 1) && !func_46(&Local_52, 32))
				{
					func_32(&Local_52);
					if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Take_Photo", Global_33, "CAMERA_SOUNDSET", -2))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY("Take_Photo", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
					}
					func_47(1);
					func_48(&Local_52, 32);
				}
				else if (func_35(Local_52.f_1[1], 1))
				{
					if (!Local_52.f_95)
					{
						Local_52.f_95 = 1;
						PED::_0xC6136B40FFFB778B(Local_52.f_95);
					}
					func_13(&Local_52, 8);
				}
				if (!func_46(&Local_52, 32))
				{
					if (func_45(Local_52.f_1[5]))
					{
						func_49();
					}
				}
				break;
			case 7:
				break;
			case 12:
				if (func_22(&Local_52))
				{
					func_23(&Local_52);
				}
				func_32(&Local_52);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Global_33, 1, 0, 0, 0);
				func_13(&Local_52, 13);
				break;
			case 13:
				if (func_22(&Local_52))
				{
					func_23(&Local_52);
				}
				func_2();
				func_1(&Local_52, 1);
				if (PED::GET_PED_CROUCH_MOVEMENT(Global_33))
				{
				}
				else if (func_56())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
				}
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
		if (func_60())
		{
			if (func_61(&uLocal_189) > 1f)
			{
				func_62();
			}
		}
	}
	if (PED::GET_PED_CROUCH_MOVEMENT(Global_33))
	{
	}
	else if (func_56())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
	}
	func_2();
	func_1(&Local_52, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1)
{
	func_63();
	func_64(&(uParam0->f_51));
	GRAPHICS::_0x9F6D859C80708B26(false, false);
	if (uParam0->f_95)
	{
		uParam0->f_95 = 0;
		PED::_0xC6136B40FFFB778B(uParam0->f_95);
	}
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
	if (CAM::DOES_CAM_EXIST(uParam0->f_14))
	{
		CAM::DESTROY_CAM(uParam0->f_14, false);
	}
	SCRIPTS::SET_NO_LOADING_SCREEN(false);
	HUD::_DISABLE_HUD_CONTEXT(0.0001674673f);
	Global_1958668 = 0;
	Global_1958669 = 0;
	AUDIO::_RELEASE_SOUNDSET("CAMERA_SOUNDSET");
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_33);
	STREAMING::REMOVE_CLIP_SET(sLocal_17);
	STREAMING::REMOVE_ANIM_DICT(sLocal_16);
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, 0);
	GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
	GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
	func_32(uParam0);
	func_34(1);
	MAP::DISPLAY_RADAR(true);
	HUD::_TEXT_BLOCK_DELETE("CAMERA");
}

void func_2()
{
	if (iLocal_20 == 1)
	{
		UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(iLocal_46);
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iLocal_30);
	UISTATEMACHINE::UI_STATE_MACHINE_DESTROY(1.370626E+14f);
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iLocal_209))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&iLocal_209);
	}
	iLocal_209 = 0;
	func_29();
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_42))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_42);
	}
	GRAPHICS::_ANIMPOSTFX_SET_TO_UNLOAD("CameraViewfinder");
	GRAPHICS::_ANIMPOSTFX_SET_TO_UNLOAD("CameraTransitionBlink");
	func_14();
	if (TASK::GET_IS_TASK_ACTIVE(Global_33, 3))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID(), false, true);
	}
}

void func_3()
{
	Local_52.f_89 = GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION();
	if (Local_52.f_89 == 1)
	{
	}
	if (Local_52.f_89 == 0)
	{
		bLocal_21 = false;
		iLocal_23 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
		iLocal_24 = GRAPHICS::_GET_MAX_NUMBER_OF_LOCAL_PHOTOS();
		iLocal_30 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_31 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iLocal_30, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
		func_65();
		iLocal_22 = 0;
		bLocal_26 = true;
		iLocal_27 = MISC::GET_GAME_TIMER();
	}
	else if (Local_52.f_89 == 2)
	{
		bLocal_21 = true;
		iLocal_30 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		uLocal_31 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iLocal_30, "cameraRollCapacityLabel", "failed/failed");
		func_21();
		iLocal_22 = 0;
		bLocal_26 = false;
	}
}

bool func_4(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_67(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951897[iVar0 /*23*/].f_3);
}

void func_5(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_66(iParam0))
	{
		return;
	}
	iVar0 = func_67(iParam0);
	if (bParam1)
	{
		func_68(iParam0, 4);
		if (bParam3)
		{
			func_69(iVar0, 1);
		}
		func_70(iVar0, 1);
	}
	else
	{
		func_71(iParam0, 4);
		func_70(iVar0, 0);
	}
}

void func_6(int iParam0)
{
	Global_1940072.f_39 = (Global_1940072.f_39 || iParam0);
}

bool func_7(var uParam0)
{
	if (Global_1958670 == 1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		Global_1958670 = 0;
		return false;
	}
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_33) > 1051260355)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
			return false;
		}
		if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
			return false;
		}
		if (PED::IS_PED_LASSOED(Global_33))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
			return false;
		}
	}
	if (func_72())
	{
		if ((func_73(16) || func_73(37)) || func_74(Global_1915643.f_20241.f_1))
		{
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
			return false;
		}
	}
	if (FIRE::IS_ENTITY_ON_FIRE(Global_33))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return false;
	}
	if (PED::GET_PED_IS_BEING_GRAPPLED(Global_33))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return false;
	}
	if (!func_75(Global_33, 0))
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return false;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Global_33) || PED::IS_PED_INJURED(Global_33)) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return false;
	}
	if (!func_76(-230.1699f, 1))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return false;
	}
	if (func_12(uParam0) == 8)
	{
	}
	if ((func_12(uParam0) != 8 && func_12(uParam0) != 9) && func_12(uParam0) != 10)
	{
		if (func_27(Global_33, 1, 0, 1) != -230.1699f)
		{
			if (func_77(uParam0) == 0)
			{
				return false;
			}
		}
	}
	if (func_78())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, true) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(Global_33, true)))
	{
		func_79("CAM_VEH", 10000, 0, 0, 0, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return false;
	}
	if (Global_1940186.f_52)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		return false;
	}
	return true;
}

void func_8(struct<91> Param0, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96)
{
	int iVar0;

	PED::SET_PED_RESET_FLAG(Global_33, 129, true);
	PED::SET_PED_RESET_FLAG(Global_33, 173, true);
	if (Param0.f_90 == 9)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 3.013735E+08f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2.794596E+37f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 7.307677E-28f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 0.005796425f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2.243347E+30f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1.249449E-32f, false);
	}
	PAD::DISABLE_CONTROL_ACTION(2, -1.076797E-08f, false);
	PAD::DISABLE_CONTROL_ACTION(2, 3.101329E-34f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2.294328E+20f, false);
	PAD::DISABLE_CONTROL_ACTION(2, 1.153572E+20f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.834345E-08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 6.248074E-29f, false);
	if (!Param0.f_90 == 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -2.896624E-12f, false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, -1.774131E+10f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -5.737896E+33f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -4.491091E+18f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1.121045E-15f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -9.436069E+32f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.489451E-29f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2.252231E+16f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -7.349376E+15f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1.32105E-21f, false);
	if (func_80(Global_33))
	{
		iVar0 = PED::GET_MOUNT(Global_33);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_RESET_FLAG(iVar0, 53, true);
			PED::SET_PED_RESET_FLAG(iVar0, 153, true);
			PED::_SET_PED_MOTIVATION(iVar0, 3, 0f, 0);
		}
	}
}

void func_9(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, -1.684686E+34f, false);
	PAD::SET_INPUT_EXCLUSIVE(0, 3.872203E+10f);
	if ((((func_12(uParam0) == 8 || func_12(uParam0) == 9) || func_12(uParam0) == 10) || func_12(uParam0) == 5) || func_12(uParam0) == 6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 3.013735E+08f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2.794596E+37f, false);
	}
	if (!uParam0->f_90 == 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 9.155838E-30f, false);
		func_81(0);
		PAD::DISABLE_CONTROL_ACTION(0, -4.640839E+09f, false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.076617E+31f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 21.56436f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.149163E+23f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.064456E+26f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -0.2608924f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.072734E+13f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.834345E-08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 6.248074E-29f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.127106E+09f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 3.101329E-34f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -7.349376E+15f, false);
	if (CAM::DOES_CAM_EXIST(uParam0->f_13) && CAM::IS_CAM_ACTIVE(uParam0->f_13))
	{
		PAD::DISABLE_CONTROL_ACTION(0, -6.00134E-14f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1.870658E-37f, false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, -1.125235E-23f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1.888856E+09f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 3.101619E+21f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.925685E-38f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2.144376E-20f, false);
}

void func_10(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam4) * 1123942400));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam5) * 1123942400));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam6) * 1123942400));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(iParam8, iParam7) * 1123942400));
}

bool func_11(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_67(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

int func_12(var uParam0)
{
	return uParam0->f_90;
}

void func_13(var uParam0, int iParam1)
{
	uParam0->f_90 = iParam1;
	func_82(uParam0);
}

void func_14()
{
	AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
	AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
}

void func_15()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_42))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_42);
	}
}

void func_16(var uParam0)
{
	struct<8> Var0;
	char cVar19[32];
	int iVar23;
	int iVar24;
	char cVar25[16];
	char cVar27[16];
	int iVar29;

	if (func_4(uParam0->f_1[6], 1))
	{
		if (uParam0->f_91 == 0 && iLocal_22 == 0)
		{
			func_5(uParam0->f_1[6], 1, 1, 1);
			if (bLocal_26)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_27) > 2500)
				{
					iLocal_23 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
					func_65();
					iLocal_27 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else
		{
			func_5(uParam0->f_1[6], 0, 1, 1);
		}
	}
	switch (uParam0->f_91)
	{
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 3.87631E-31f))
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(iLocal_46);
				bLocal_21 = true;
				func_83(uParam0, 2);
				iLocal_20 = 0;
			}
			break;
		case 0:
			if (func_46(uParam0, 32))
			{
				func_32(uParam0);
				if (func_20() || bLocal_21)
				{
					func_84(uParam0);
					func_83(uParam0, 2);
				}
				else if (iLocal_23 == iLocal_24)
				{
					func_84(uParam0);
					if (iLocal_46 == 0)
					{
						Var0.f_2 = 0;
						Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
						Var0.f_7.f_3 = 0;
						iLocal_46 = func_85(&Var0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						func_83(uParam0, 1);
						iLocal_20 = 1;
					}
					else
					{
						bLocal_21 = true;
						func_83(uParam0, 2);
					}
				}
				else
				{
					func_83(uParam0, 2);
				}
			}
			if (func_46(uParam0, 128))
			{
				GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
				GRAPHICS::BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(1);
				func_83(uParam0, 7);
			}
			break;
		case 2:
			Local_52.f_96 = 0;
			func_47(0);
			func_83(uParam0, 3);
			iLocal_50 = MISC::GET_GAME_TIMER();
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_50) > 0)
			{
				iLocal_50 = MISC::GET_GAME_TIMER();
				func_29();
				func_86();
				if (func_20() || bLocal_21)
				{
					func_83(uParam0, 4);
				}
				else
				{
					GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
					GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO();
					iLocal_23++;
					func_65();
					SCRIPTS::SET_NO_LOADING_SCREEN(true);
					func_83(uParam0, 5);
				}
			}
			break;
		case 5:
			uParam0->f_89 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_89 == 1)
			{
			}
			if (uParam0->f_89 == 0)
			{
				StringCopy(&cVar19, "", 32);
				iVar23 = func_87();
				if (func_88(iVar23))
				{
					MemCopy(&cVar19, {func_89(iVar23)}, 4);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
				{
					iVar24 = func_90();
					StringCopy(&cVar19, func_91(iVar24), 32);
				}
				GRAPHICS::_SET_REGION_PHOTO_TAKEN_STAT(&cVar19);
				StringCopy(&cVar25, "", 16);
				StringCopy(&cVar27, "", 16);
				iVar29 = func_92();
				if (func_93(iVar29))
				{
					StringCopy(&cVar25, func_94(iVar29), 16);
					StringCopy(&cVar27, func_95(iVar29), 16);
				}
				GRAPHICS::_SET_DISTRICT_PHOTO_TAKEN_STAT(&cVar25);
				GRAPHICS::_SET_STATE_PHOTO_TAKEN_STAT(&cVar27);
				func_84(uParam0);
				GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(0);
				iLocal_25 = 0;
				func_83(uParam0, 6);
			}
			else if (uParam0->f_89 == 2)
			{
				func_83(uParam0, 4);
			}
			break;
		case 6:
			if (iLocal_25 == 0)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_42();
				func_33(func_12(uParam0));
				func_5(uParam0->f_1[6], 0, 1, 1);
				func_96(691, 0);
				iLocal_25 = 1;
			}
			uParam0->f_89 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
			if (uParam0->f_89 == 0)
			{
				Local_52.f_96 = 1;
				func_97(uParam0, 32);
				func_83(uParam0, 0);
				if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Wind_On_Film", Global_33, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("Wind_On_Film", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
				}
			}
			else if (uParam0->f_89 == 2)
			{
				Local_52.f_96 = 1;
				func_97(uParam0, 32);
				func_83(uParam0, 0);
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_50) > 300)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_97(uParam0, 32);
				func_83(uParam0, 0);
				func_42();
				func_33(func_12(uParam0));
				if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Wind_On_Film", Global_33, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("Wind_On_Film", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
				}
				func_96(691, 0);
			}
			break;
		case 7:
			uParam0->f_89 = GRAPHICS::GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(1);
			if (uParam0->f_89 == 0)
			{
				GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(true, 0);
				func_48(uParam0, 256);
				func_97(uParam0, 128);
				func_83(uParam0, 0);
			}
			else if (uParam0->f_89 == 2)
			{
				func_97(uParam0, 128);
				func_83(uParam0, 0);
			}
			break;
	}
}

bool func_17()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "camera_takingPic"))
		{
			return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "camera_takingPic");
		}
	}
	return false;
}

void func_18(var uParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 30) == 0 || func_98(Global_1300338, 16))
	{
		func_99(uParam0);
	}
}

void func_19(var uParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || func_98(Global_1300338, 16))
	{
		func_100();
		if (!ITEMSET::IS_ITEMSET_VALID(*uParam0) || ITEMSET::GET_ITEMSET_SIZE(*uParam0) <= 0)
		{
			return;
		}
		func_101(uParam0);
	}
	if (func_98(Global_1300338, 16))
	{
		func_102(&Global_1300338, 16);
	}
}

bool func_20()
{
	return Global_1958667;
}

void func_21()
{
	StringCopy(&cLocal_32, "-", 32);
	StringConCat(&cLocal_32, " / ", 32);
	StringCopy(&cLocal_36, "-", 32);
	StringConCat(&cLocal_32, &cLocal_36, 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_31, &cLocal_32);
}

bool func_22(var uParam0)
{
	return *uParam0;
}

void func_23(var uParam0)
{
	*uParam0 = 0;
}

void func_24()
{
	func_63();
	Global_1300338.f_1 = ITEMSET::CREATE_ITEMSET(true);
}

void func_25()
{
	HUD::TEXT_BLOCK_REQUEST("CAMERA");
	STREAMING::REQUEST_ANIM_DICT(sLocal_16);
	STREAMING::REQUEST_CLIP_SET(sLocal_17);
	GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX("CameraViewfinder");
	GRAPHICS::_ANIMPOSTFX_PRELOAD_POSTFX("CameraTransitionBlink");
}

bool func_26(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (GRAPHICS::_ANIMPOSTFX_HAS_LOADED("CameraViewfinder"))
	{
		iVar0 = 0;
	}
	if (GRAPHICS::_ANIMPOSTFX_HAS_LOADED("CameraTransitionBlink"))
	{
		iVar0 = 0;
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED("CAMERA"))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(sLocal_17))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_16))
	{
		iVar0 = 0;
	}
	if (!AUDIO::PREPARE_SOUNDSET("CAMERA_SOUNDSET", false))
	{
		if ((MISC::GET_GAME_TIMER() - iParam0) > 7000)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

float func_27(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_28()
{
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(10);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(11);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(7);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(6);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(5);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(4);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(3);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
	HUD::_UI_PROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(0);
	PED::SET_PED_RESET_FLAG(Global_1295619.f_3, 129, true);
	PED::SET_PED_RESET_FLAG(Global_1295619.f_3, 103, true);
}

void func_29()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_40))
	{
		GRAPHICS::ANIMPOSTFX_STOP(sLocal_40);
	}
}

void func_30()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_42))
	{
		GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(sLocal_42);
	}
}

void func_31()
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;

	vLocal_157 = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_33);
	vVar1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vLocal_157, fVar0, 0f, 2f, -0.2f) };
	vVar4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vLocal_157, fVar0, -0.75f, 0f, 0f) };
	vVar7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vLocal_157, fVar0, 0.75f, 0f, 0f) };
	if (PED::GET_PED_CROUCH_MOVEMENT(Global_33))
	{
		bLocal_170 = false;
		return;
	}
	if ((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(Global_33, vVar1.x, vVar1.y, vVar1.z, 3167) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(Global_33, vVar4.x, vVar4.y, vVar4.z, 3167)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(Global_33, vVar7.x, vVar7.y, vVar7.z, 3167))
	{
		bLocal_170 = true;
	}
	else
	{
		bLocal_170 = false;
	}
}

void func_32(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (func_66(uParam0->f_1[iVar0]))
		{
			func_103(&(uParam0->f_1[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

void func_33(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			func_104(6, 0);
			func_104(3, 0);
			func_104(8, 0);
			func_104(9, 0);
			func_104(7, 0);
			func_104(4, 0);
			func_104(5, 0);
			func_104(0, 1);
			func_104(1, 1);
			func_104(2, 1);
			break;
		case 6:
			func_104(0, 0);
			func_104(8, 0);
			func_104(9, 0);
			func_104(1, 0);
			func_104(2, 0);
			func_104(5, 1);
			func_104(3, 1);
			func_104(4, 1);
			func_104(6, 1);
			func_104(7, 1);
			break;
		case 8:
			func_104(0, 0);
			func_104(1, 0);
			func_104(2, 0);
			func_104(5, 1);
			func_104(8, 1);
			func_104(9, 1);
			func_104(3, 1);
			func_104(4, 1);
			func_104(6, 1);
			func_104(7, 1);
			break;
		case 9:
			func_104(0, 0);
			func_104(1, 0);
			func_104(2, 0);
			func_104(5, 1);
			func_104(8, 1);
			func_104(9, 1);
			func_104(3, 1);
			func_104(4, 1);
			func_104(6, 1);
			func_104(7, 1);
			break;
		case 10:
			func_104(2, 0);
			func_104(0, 0);
			func_104(3, 0);
			func_104(1, 0);
			func_104(5, 0);
			func_104(8, 0);
			func_104(9, 0);
			func_104(7, 0);
			func_104(6, 0);
			func_104(9, 0);
			func_104(4, 0);
			break;
		case 7:
			func_104(2, 0);
			func_104(0, 0);
			func_104(6, 0);
			func_104(4, 0);
			func_104(5, 0);
			func_104(1, 0);
			func_104(8, 0);
			func_104(9, 0);
			func_104(7, 0);
			break;
	}
}

void func_34(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

bool func_35(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_67(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

void func_36()
{
	if (iLocal_207 == 0)
	{
		iLocal_207 = 1;
	}
}

void func_37()
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	var uVar5;
	float fVar6;

	vLocal_157 = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_33);
	vVar1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vLocal_157, fVar0, 0f, 4f, 0f) };
	if (func_105(PLAYER::PLAYER_ID(), 1))
	{
		vVar1.f_2 = (vVar1.z + 1f);
	}
	else
	{
		vVar1.f_2 = (vVar1.z + 1112014848);
	}
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &fVar4, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vLocal_157, &uVar5, false);
	if ((vLocal_157.z - fVar4) > 3f)
	{
		bLocal_152 = false;
		return;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		bLocal_152 = false;
		return;
	}
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		bLocal_152 = false;
		return;
	}
	if (PED::_IS_PED_DRUNK(Global_33))
	{
		bLocal_152 = false;
		return;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vLocal_157, 2f) > 0)
	{
		bLocal_152 = false;
		return;
	}
	if ((fVar4 - vLocal_157.z) > 1f)
	{
		bLocal_152 = false;
		return;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(Global_33))
	{
		bLocal_152 = false;
		return;
	}
	if (func_38(Global_33, 0))
	{
		bLocal_152 = false;
		return;
	}
	if (PED::GET_PED_CROUCH_MOVEMENT(Global_33))
	{
		bLocal_152 = false;
		return;
	}
	if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar1, 0, &(vVar1.f_2)) == 1)
	{
		bLocal_152 = false;
		return;
	}
	if (PATHFIND::IS_POINT_ON_ROAD(vVar1.x, vVar1.y, fVar4, 0))
	{
		bLocal_152 = false;
		return;
	}
	fVar6 = 1f;
	if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(Global_33, vVar1.x, vVar1.y, (fVar4 + fVar6), 3167))
	{
		bLocal_152 = true;
	}
	else
	{
		bLocal_152 = false;
	}
	if (bLocal_152)
	{
		vLocal_154 = { vLocal_157.x, vLocal_157.y, (vLocal_157.z - 1f) };
		fLocal_165 = fVar0;
		vLocal_160 = { vVar1.x, vVar1.y, (fVar4 + fVar6) };
	}
}

bool func_38(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_39(var uParam0)
{
	return func_106(*uParam0, 1);
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1 || !func_39(uParam0))
	{
		func_107(uParam0);
	}
}

bool func_41()
{
	switch (iLocal_207)
	{
		case 0:
			if (iLocal_208 == iLocal_210)
			{
			}
			break;
		case 1:
			iLocal_209 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(iLocal_208);
			iLocal_207 = 2;
			break;
		case 2:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iLocal_209))
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(iLocal_209, iLocal_210);
				UISTATEMACHINE::UI_STATE_MACHINE_CREATE(1.370626E+14f, iLocal_209);
				iLocal_207 = 3;
			}
			break;
		case 3:
			return true;
		case 4:
			return true;
	}
	return false;
}

void func_42()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_40))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_40);
	}
}

int func_43()
{
	return Global_1572887.f_14;
}

void func_44(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;

	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), true, 0, -1, false);
	if (uParam0->f_73 > 0 && IntToFloat(uParam0->f_73) > 1118961664)
	{
		uParam0->f_73 = BUILTIN::ROUND(89f);
	}
	else if (uParam0->f_73 < 0 && IntToFloat(uParam0->f_73) < -1028521984)
	{
		uParam0->f_73 = BUILTIN::ROUND(-89f);
	}
	if (uParam0->f_74 > 0 && IntToFloat(uParam0->f_74) > 1118961664)
	{
		uParam0->f_74 = BUILTIN::ROUND(89f);
	}
	else if (uParam0->f_74 < 0 && IntToFloat(uParam0->f_74) < -1028521984)
	{
		uParam0->f_74 = BUILTIN::ROUND(-89f);
	}
	if (uParam0->f_73 != uParam0->f_75)
	{
		uParam0->f_75 = uParam0->f_73;
		fVar0 = ((BUILTIN::TO_FLOAT(uParam0->f_73) - -1028521984) / (1118961664 - -1028521984));
		uParam0->f_81 = fVar0;
	}
	else
	{
		uParam0->f_85 = 0f;
	}
	if (uParam0->f_74 != uParam0->f_76)
	{
		uParam0->f_76 = uParam0->f_74;
		fVar1 = ((BUILTIN::TO_FLOAT(uParam0->f_74) - -1028521984) / (1118961664 - -1028521984));
		uParam0->f_82 = fVar1;
	}
	else
	{
		uParam0->f_86 = 0f;
	}
	fVar4 = 1112014848; /* Float: 50f */
	fVar5 = -1043857408; /* Float: -25f */
	fVar2 = 1116209152; /* Float: 68f */
	fVar3 = -1029046272; /* Float: -85f */
	fVar9 = uParam0->f_65;
	fVar10 = uParam0->f_66;
	fVar8 = -1f;
	if (uParam0->f_77 <= 0)
	{
		fVar8 = 1f;
		uParam0->f_77 = MISC::ABSI(uParam0->f_77);
	}
	fVar6 = ((BUILTIN::TO_FLOAT(uParam0->f_77) - 0f) / (1118961664 - 0f));
	fVar9 = (fVar9 + (fVar6 * fVar8));
	if (fVar9 >= fVar2)
	{
		fVar9 = fVar2;
	}
	else if (fVar9 < fVar3)
	{
		fVar9 = fVar3;
	}
	uParam0->f_65 = fVar9;
	fVar8 = -1f;
	if (uParam0->f_78 <= 0)
	{
		fVar8 = 1f;
		uParam0->f_78 = MISC::ABSI(uParam0->f_78);
	}
	fVar7 = ((BUILTIN::TO_FLOAT(uParam0->f_78) - 0f) / (1118961664 - 0f));
	fVar10 = (fVar10 + (fVar7 * fVar8));
	if (fVar10 >= fVar4)
	{
		fVar10 = fVar4;
	}
	else if (fVar10 < fVar5)
	{
		fVar10 = fVar5;
	}
	uParam0->f_66 = fVar10;
	uParam0->f_67 = { Vector(fLocal_149, 0f, 0f) + Vector(uParam0->f_65, 0f, uParam0->f_66) };
	func_108(uParam0);
	func_109(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_14, uParam0->f_61, uParam0->f_67, 50f, 0, 1, 1, 2, 0, 0);
	if ((MISC::GET_GAME_TIMER() - iLocal_171) > 100)
	{
		if (iLocal_45 == 0)
		{
			fVar11 = ENTITY::GET_ENTITY_HEADING(Global_33);
			vVar12 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vLocal_157, fVar11, 0f, 0.25f, 0f) };
			func_31();
			if ((!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(Global_33, vVar12.x, vVar12.y, vVar12.z, 3167) || !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(Global_33, uParam0->f_61, 3167)) || bLocal_170 == 0)
			{
				if (func_43() == 0 && PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
				{
				}
				else if (PED::IS_PED_IN_ANY_BOAT(Global_33))
				{
				}
				else
				{
					Global_1958670 = 1;
					iLocal_45 = 1;
				}
			}
		}
		iLocal_171 = MISC::GET_GAME_TIMER();
	}
}

bool func_45(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_67(iParam0);
	iVar1 = Global_1951897[iVar0 /*23*/].f_4;
	return (func_35(iParam0, 1) && PAD::IS_CONTROL_JUST_PRESSED(2, iVar1));
}

bool func_46(var uParam0, int iParam1)
{
	return (uParam0->f_92 && iParam1) != 0;
}

void func_47(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "camera_takingPic", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "camera_takingPic"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "camera_takingPic");
		}
	}
}

void func_48(var uParam0, int iParam1)
{
	uParam0->f_92 = (uParam0->f_92 || iParam1);
}

void func_49()
{
	UIAPPS::LAUNCH_UIAPP_WITH_ENTRY("social_club_feed", "launch_to_photos");
}

int func_50(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_110(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1951897[iVar0 /*23*/].f_11 && iParam1 == Global_1951897[iVar0 /*23*/].f_4)
				{
					if (iParam3 <= Global_1951897[iVar0 /*23*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_111(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1f, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

int func_51(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	return func_79(sParam0, -1, iParam1, iParam2, 0, bParam3);
}

bool func_52()
{
	if (!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
	}
	return false;
}

int func_53(var uParam0)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 2.779732E-34f) && !func_46(uParam0, 32))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY("CLICK", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
		func_47(1);
		func_48(uParam0, 32);
	}
	return 1;
}

void func_54(var uParam0)
{
	vLocal_157 = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
	if (!PED::IS_PED_LASSOED(Global_33))
	{
		if (func_43() == 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_157, vLocal_154, true) > 1101004800)
			{
				Global_1958670 = 1;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_157, vLocal_154, true) > 3f)
			{
				Global_1958670 = 1;
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_157, vLocal_154, true) > 3f)
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_33, vLocal_154, fLocal_165, true, false, true);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
}

int func_55(var uParam0)
{
	if (!func_39(uParam0))
	{
		return 0;
	}
	if (func_112(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1148846080));
	}
	return (func_113() - BUILTIN::ROUND((uParam0->f_1 * 1148846080)));
}

bool func_56()
{
	if (PED::GET_PED_IS_BEING_GRAPPLED(Global_33) == 0 && PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		return true;
	}
	return false;
}

void func_57(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_58(var uParam0)
{
	if (func_22(uParam0))
	{
		func_33(8);
		func_23(uParam0);
	}
	func_114(uParam0);
	func_115();
	func_116();
	uParam0->f_72 = 0;
	iLocal_201 = 0;
	bLocal_163 = true;
	bLocal_164 = false;
	HUD::_ENABLE_HUD_CONTEXT(0.0001674673f);
}

void func_59(var uParam0)
{
	func_117(uParam0);
	if (uParam0->f_77 > 16)
	{
		if ((fLocal_166 - 1032805417) > -1054867456)
		{
			if (uParam0->f_77 > 100)
			{
				vLocal_167.f_2 = (vLocal_167.z - 1058642330);
				fLocal_166 = (fLocal_166 - (1032805417 * 3f));
			}
			else
			{
				vLocal_167.f_2 = (vLocal_167.z - 1045220557);
				fLocal_166 = (fLocal_166 - 1032805417);
			}
		}
	}
	if (uParam0->f_77 < -16)
	{
		if ((fLocal_166 + 1032805417) < 1092616192)
		{
			if (uParam0->f_77 < -100)
			{
				vLocal_167.f_2 = (vLocal_167.z + 1058642330);
				fLocal_166 = (fLocal_166 + (1032805417 * 3f));
			}
			else
			{
				vLocal_167.f_2 = (vLocal_167.z + 1045220557);
				fLocal_166 = (fLocal_166 + 1032805417);
			}
		}
	}
	if (uParam0->f_78 > 16)
	{
		if (PAD::IS_LOOK_INVERTED())
		{
		}
		if ((fLocal_205 - 1032805417) > -1054867456)
		{
			if (uParam0->f_78 > 100)
			{
				vLocal_167.x = (vLocal_167.x - 1058642330);
				fLocal_205 = (fLocal_205 - (1032805417 * 3f));
			}
			else
			{
				vLocal_167.x = (vLocal_167.x - 1045220557);
				fLocal_205 = (fLocal_205 - 1032805417);
			}
		}
	}
	if (uParam0->f_78 < -16)
	{
		if (PAD::IS_LOOK_INVERTED())
		{
		}
		if ((fLocal_205 + 1032805417) < 1092616192)
		{
			if (uParam0->f_78 < -100)
			{
				vLocal_167.x = (vLocal_167.x + 1058642330);
				fLocal_205 = (fLocal_205 + (1032805417 * 3f));
			}
			else
			{
				vLocal_167.x = (vLocal_167.x + 1045220557);
				fLocal_205 = (fLocal_205 + 1032805417);
			}
		}
	}
	if (bLocal_163)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(Global_33, vLocal_160, 3167))
		{
			bLocal_164 = false;
		}
		else
		{
			bLocal_164 = true;
		}
		bLocal_163 = false;
	}
	if ((func_35(uParam0->f_1[7], 1) || func_38(Global_33, 0)) || bLocal_164)
	{
		if (func_38(Global_33, 0))
		{
			if (func_118(Global_33, 3.034861E-30f))
			{
				TASK::CLEAR_PED_TASKS(Global_33, true, false);
			}
		}
		else if (func_119(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
		}
		GRAPHICS::_0x9F6D859C80708B26(false, false);
		if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Remove_Tripod", Global_33, "CAMERA_SOUNDSET", -2))
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY("Remove_Tripod", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
		}
		iLocal_176 = 0;
		func_32(uParam0);
		func_13(uParam0, 10);
		func_15();
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_33);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_33, "portrait_normal", sLocal_16);
		if (!func_39(&uLocal_172))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, false, 0, false, false);
			func_40(&uLocal_172, 1);
		}
	}
	if (func_120(uParam0->f_1[9], 0, 1))
	{
		if (iLocal_192 == 0)
		{
			uParam0->f_71++;
			if (uParam0->f_71 == 8)
			{
				uParam0->f_71 = 0;
			}
			if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Change_Expression", Global_33, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY("Change_Expression", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_33);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_33, sLocal_180[uParam0->f_71], sLocal_16);
		}
	}
	if (func_120(uParam0->f_1[9], 1, 1))
	{
		if (iLocal_192 == 0)
		{
			uParam0->f_71 = (uParam0->f_71 - 1);
			if (uParam0->f_71 < 0)
			{
				uParam0->f_71 = 7;
			}
			if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Change_Expression", Global_33, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY("Change_Expression", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
			}
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_33);
			PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Global_33, sLocal_180[uParam0->f_71], sLocal_16);
		}
	}
	uParam0->f_26 = { func_121(PLAYER::GET_PLAYER_INDEX()) + ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_33) * Vector(2f, 2f, 2f) + Vector(1f, 0f, 0f) };
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(Global_33, &(uParam0->f_26));
	if (bLocal_203 == 0)
	{
		if (func_120(uParam0->f_1[8], 1, 1))
		{
			bLocal_203 = true;
			uParam0->f_72++;
			if (uParam0->f_72 == 7)
			{
				uParam0->f_72 = 0;
			}
			if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Change_Pose", Global_33, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY("Change_Pose", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
			}
			func_122();
		}
	}
	if (bLocal_203 == 0)
	{
		if (func_120(uParam0->f_1[8], 0, 1))
		{
			bLocal_203 = true;
			uParam0->f_72 = (uParam0->f_72 - 1);
			if (uParam0->f_72 < 0)
			{
				uParam0->f_72 = 6;
			}
			if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Change_Pose", Global_33, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY("Change_Pose", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
			}
			func_122();
		}
	}
	if (bLocal_203)
	{
		switch (iLocal_201)
		{
			case 0:
				break;
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_202) > 200)
				{
					iLocal_201 = 2;
				}
				break;
			case 2:
				func_123(uParam0);
				iLocal_201 = 3;
				iLocal_202 = MISC::GET_GAME_TIMER();
				break;
			case 3:
				if ((MISC::GET_GAME_TIMER() - iLocal_202) > 500)
				{
					iLocal_201 = 4;
					iLocal_202 = MISC::GET_GAME_TIMER();
					func_30();
				}
				break;
			case 4:
				if ((MISC::GET_GAME_TIMER() - iLocal_202) > 700)
				{
					iLocal_201 = 0;
					bLocal_203 = false;
				}
				break;
			default:
				break;
		}
	}
	func_109(uParam0);
	CAM::SET_CAM_PARAMS(uParam0->f_14, uParam0->f_61, vLocal_167, 50f, 0, 1, 1, 2, 0, 0);
}

bool func_60()
{
	return iLocal_192;
}

float func_61(var uParam0)
{
	if (!func_39(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_112(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_124() - uParam0->f_1);
}

void func_62()
{
	func_57(&uLocal_189);
	iLocal_192 = 0;
}

void func_63()
{
	if (ITEMSET::IS_ITEMSET_VALID(Global_1300338.f_1))
	{
		ITEMSET::_CLEAR_ITEMSET(Global_1300338.f_1);
		ITEMSET::DESTROY_ITEMSET(Global_1300338.f_1);
	}
}

void func_64(var uParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		ITEMSET::DESTROY_ITEMSET(*uParam0);
	}
}

void func_65()
{
	StringCopy(&cLocal_32, "", 32);
	MISC::_INT_TO_STRING(iLocal_23, "%i", &cLocal_32);
	StringConCat(&cLocal_32, " / ", 32);
	StringCopy(&cLocal_36, "", 32);
	MISC::_INT_TO_STRING(iLocal_24, "%i", &cLocal_36);
	StringConCat(&cLocal_32, &cLocal_36, 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uLocal_31, &cLocal_32);
}

bool func_66(int iParam0)
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

int func_67(int iParam0)
{
	return iParam0;
}

void func_68(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_69(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_110(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_70(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_71(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

bool func_72()
{
	return (Global_1915643.f_20637 || Global_1915643.f_22504.f_1);
}

int func_73(int iParam0)
{
	if (func_72())
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	int iVar0;

	if (!func_125(iParam0))
	{
		return 0;
	}
	if (iParam0 == 46 || iParam0 == 93)
	{
		return 0;
	}
	iVar0 = func_126(iParam0);
	if (((((((((((((iVar0 == 10 || iVar0 == 29) || iVar0 == 4) || iVar0 == 14) || iVar0 == 15) || iVar0 == 16) || iVar0 == 27) || iVar0 == 28) || iVar0 == 35) || iVar0 == 35) || iVar0 == 38) || iVar0 == 29) || iVar0 == 39) || iVar0 == 33)
	{
		return 1;
	}
	return 0;
}

bool func_75(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_98(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_98(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_98(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_98(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_98(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_98(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_98(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_98(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_76(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_127(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_128(bParam0);
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
			if (!func_129(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_130(bParam0))
			{
				return true;
			}
			break;
	}
	return func_131(bParam0, 0, 0, 0) >= iParam1;
}

int func_77(var uParam0)
{
	return uParam0->f_91;
}

bool func_78()
{
	return Global_1940239.f_2;
}

int func_79(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_80(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_81(bool bParam0)
{
	if (bParam0)
	{
		func_132(4);
	}
	func_132(2);
	MISC::SET_BIT(&(Global_1958621.f_1), 0);
}

void func_82(var uParam0)
{
	*uParam0 = 1;
}

void func_83(var uParam0, int iParam1)
{
	uParam0->f_91 = iParam1;
}

void func_84(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	bVar3 = false;
	if (func_12(uParam0) == 8 || func_12(uParam0) == 9)
	{
		bVar2 = true;
	}
	else
	{
		bVar2 = false;
	}
	GRAPHICS::_SET_PHOTO_SELF_STAT(bVar2);
	if (ITEMSET::IS_ITEMSET_VALID(Global_1300338.f_1) && ITEMSET::GET_ITEMSET_SIZE(Global_1300338.f_1) > 0)
	{
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 <= (ITEMSET::GET_ITEMSET_SIZE(Global_1300338.f_1) - 1))
		{
			iVar0 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, Global_1300338.f_1));
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 != uParam0->f_25 || DECORATOR::DECOR_GET_BOOL(iVar0, func_133()))
			{
				bVar3 = true;
				uParam0->f_25 = iVar1;
			}
			iVar4++;
		}
	}
	if (bVar3)
	{
		STATS::STAT_PHOTOGRAPH_TAKEN(Global_1300338.f_1);
	}
	TELEMETRY::_TELEMETRY_PHOTO_CAM(-0.02967396f, 0, 0f, bVar2, uParam0->f_93, BUILTIN::FLOOR(uParam0->f_15.f_3), iVar1, func_135(func_134(0)), 0);
}

int func_85(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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

void func_86()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_41))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(sLocal_41);
	}
}

int func_87()
{
	return Global_1893611.f_2;
}

bool func_88(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

char[] func_89(int iParam0)
{
	char[] cVar0[8];

	if (!func_88(iParam0))
	{
		StringCopy(&cVar0, "UNK", 8);
		return cVar0;
	}
	return Global_1887363[iParam0 /*36*/].f_23;
}

int func_90()
{
	return ZONE::_GET_WATER_MAP_ZONE_AT_COORDS(Global_34);
}

char* func_91(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return "WATER_AURORA_BASIN";
		case joaat("WATER_BARROW_LAGOON"):
			return "WATER_BARROW_LAGOON";
		case joaat("WATER_BAYOU_NWA"):
			return "WATER_BAYOU_NWA";
		case joaat("WATER_BEARTOOTH_BECK"):
			return "WATER_BEARTOOTH_BECK";
		case joaat("WATER_CAIRN_LAKE"):
			return "WATER_CAIRN_LAKE";
		case joaat("WATER_CALMUT_RAVINE"):
			return "WATER_CALUMET_RAVINE";
		case joaat("WATER_CATTIAL_POND"):
			return "WATER_CATTAIL_POND";
		case joaat("WATER_DAKOTA_RIVER"):
			return "WATER_DAKOTA_RIVER";
		case joaat("WATER_DEADBOOT_CREEK"):
			return "WATER_DEADBOOT_CREEK";
		case joaat("WATER_DEWBERRY_CREEK"):
			return "WATER_DEWBERRY_CREEK";
		case joaat("WATER_ELYSIAN_POOL"):
			return "WATER_ELYSIAN_POOL";
		case joaat("WATER_FLAT_IRON_LAKE"):
			return "WATER_FLAT_IRON";
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return "WATER_HAWKS_EYE_CREEK";
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return "WATER_HEARTLANDS_OVERFLOW";
		case joaat("WATER_HOT_SPRINGS"):
			return "WATER_HOT_SPRINGS";
		case joaat("WATER_KAMASSA_RIVER"):
			return "WATER_KAMASSA_RIVER";
		case joaat("WATER_LAKE_DON_JULIO"):
			return "WATER_LAKE_DON_JULIO";
		case joaat("WATER_LAKE_ISABELLA"):
			return "WATER_LAKE_ISABELLA";
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return "WATER_LANNACHECHEE_RIVER";
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return "WATER_LITTLE_CREEK_RIVER";
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return "WATER_LOWER_MONTANA_RIVER";
		case joaat("WATER_MATTLOCK_POND"):
			return "WATER_MATTLOCK_POND";
		case joaat("WATER_MOONSTONE_POND"):
			return "WATER_MOONSTONE_POND";
		case joaat("WATER_O_CREAGHS_RUN"):
			return "WATER_OCREAGHS_RUN";
		case joaat("WATER_OWANJILA"):
			return "WATER_OWANJILA";
		case joaat("WATER_RINGNECK_CREEK"):
			return "WATER_RINGNECK_CREEK";
		case joaat("WATER_SAN_LUIS_RIVER"):
			return "WATER_SAN_LUIS_RIVER";
		case joaat("WATER_SEA_OF_CORONADO"):
			return "WATER_SEA_OF_CORONADO";
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return "WATER_SOUTHFIELD_FLATS";
		case joaat("WATER_SPIDER_GORGE"):
			return "WATER_SPIDER_GORGE";
		case joaat("WATER_STILLWATER_CREEK"):
			return "WATER_STILLWATER_CREEK";
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return "WATER_UPPER_MONTANA_RIVER";
		case joaat("WATER_WHINYARD_STRAIT"):
			return "WATER_WHINYARD_STRAIT";
		default:
			break;
	}
	return "";
}

int func_92()
{
	return Global_1896646.f_41;
}

bool func_93(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	if (func_43() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No District Label!";
}

char* func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE";
		case 1:
			return "WEST_ELIZ";
		case 2:
			return "LEMOYNE";
		case 3:
			return "NEW_HANOV";
		case 4:
			return "WEST_ELIZ";
		case 5:
			return "AMBARINO";
		case 6:
			return "AMBARINO";
		case 7:
			return "AMBARINO";
		case 8:
			return "GUARMA";
		case 9:
			return "NEW_HANOV";
		case 10:
			return "NEW_HANOV";
		case 11:
			return "LEMOYNE";
		case 12:
			return "WEST_ELIZ";
		case 13:
			return "NEW_AUST";
		case 14:
			return "NEW_AUST";
		case 15:
			return "NEW_AUST";
		case 16:
			return "NEW_AUST";
		default:
			break;
	}
	if (func_43() == 0)
	{
		return "FMMC_INV_ALID";
	}
	return "No State Label!";
}

void func_96(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_136(iParam0, &iVar0, &iVar1);
	if (!func_137(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_138(iVar0, iVar1);
}

void func_97(var uParam0, int iParam1)
{
	uParam0->f_92 = (uParam0->f_92 - (uParam0->f_92 && iParam1));
}

bool func_98(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_99(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	ENTITY::_GET_ENTITIES_NEAR_POINT(ENTITY::GET_ENTITY_COORDS(Global_33, true, false), func_139(), iVar0, 1);
	if (ITEMSET::GET_ITEMSET_SIZE(*uParam0) > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (ITEMSET::GET_ITEMSET_SIZE(*uParam0) - 1))
		{
			iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, *uParam0));
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			iVar3 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, *uParam0));
			if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1)) || func_140(Global_33, iVar1, 1, 1) > (func_139() + 1092616192)) || func_141(iVar3, 1))
			{
				func_142(iVar1, *uParam0);
			}
			iVar5++;
		}
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
	{
		iVar5 = 0;
		while (iVar5 <= (ITEMSET::GET_ITEMSET_SIZE(iVar0) - 1))
		{
			iVar3 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0));
			bVar4 = false;
			if (!func_143(iVar3, 0) && !func_141(iVar3, 1))
			{
				iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0));
				iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
				if (PED::IS_PED_A_PLAYER(iVar3) && !PED::_IS_ANIMAL_CONTROLLED_BY_A_PLAYER(iVar3))
				{
					bVar4 = true;
				}
				if (DECORATOR::DECOR_EXIST_ON(iVar3, func_133()) && DECORATOR::DECOR_GET_BOOL(iVar3, func_133()))
				{
					bVar4 = true;
				}
				if (func_144(iVar3))
				{
					if (func_145(iVar3))
					{
						bVar4 = true;
					}
					if (PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()) == iVar3)
					{
						bVar4 = true;
					}
					if (iVar2 == 9.798023E-15f)
					{
						bVar4 = true;
					}
					if (func_146(iVar2))
					{
						bVar4 = true;
					}
				}
			}
			if (bVar4)
			{
				func_147(iVar1, *uParam0);
			}
			iVar5++;
		}
	}
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_100()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (ITEMSET::GET_ITEMSET_SIZE(Global_1300338.f_1) > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (ITEMSET::GET_ITEMSET_SIZE(Global_1300338.f_1) - 1))
		{
			iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, Global_1300338.f_1));
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					iVar3 = func_148(ENTITY::GET_ENTITY_MODEL(iVar1));
					if (PED::IS_PED_A_PLAYER(iVar2) || (DECORATOR::DECOR_EXIST_ON(iVar2, func_133()) && DECORATOR::DECOR_GET_BOOL(iVar2, func_133())))
					{
						if (func_149(iVar1))
						{
							if (func_150(iVar2))
							{
								if (func_98(Global_1300338, 256) && iVar2 == Global_33)
								{
									if (!func_98(Global_1300338, 64))
									{
										func_151(iVar2);
									}
								}
							}
							else
							{
								func_151(iVar2);
							}
						}
						else
						{
							func_151(iVar2);
						}
					}
					else if (PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()) == iVar2)
					{
						if (!func_149(iVar1) || func_80(Global_33))
						{
							func_151(iVar2);
						}
					}
					else if (!func_152(iVar2, iVar3))
					{
						func_151(iVar2);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_101(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 <= (ITEMSET::GET_ITEMSET_SIZE(*uParam0) - 1))
	{
		iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, *uParam0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				iVar2 = func_148(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (PED::IS_PED_A_PLAYER(iVar1) || (DECORATOR::DECOR_EXIST_ON(iVar1, func_133()) && DECORATOR::DECOR_GET_BOOL(iVar1, func_133())))
				{
					if (func_149(iVar0))
					{
						if (!PED::_IS_PED_VISIBILITY_TRACKED(iVar1))
						{
							PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
						}
						else if (func_150(iVar1))
						{
							if (func_98(Global_1300338, 256) && iVar1 == Global_33)
							{
								if (func_98(Global_1300338, 64))
								{
									func_147(iVar0, Global_1300338.f_1);
								}
							}
							else
							{
								func_147(iVar0, Global_1300338.f_1);
							}
						}
					}
				}
				else if (PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()) == iVar1)
				{
					if (func_149(iVar0) && !func_80(Global_33))
					{
						if (!PED::_IS_PED_VISIBILITY_TRACKED(iVar1))
						{
							PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
						}
						else if (func_150(iVar1))
						{
							func_147(iVar0, Global_1300338.f_1);
						}
					}
				}
				else if (func_153(iVar1, iVar2))
				{
					func_147(iVar0, Global_1300338.f_1);
				}
			}
		}
		iVar3++;
	}
}

void func_102(var uParam0, int iParam1)
{
	func_154(uParam0, iParam1);
}

void func_103(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_66(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_67(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_155(iVar0);
	*uParam0 = 0;
}

void func_104(int iParam0, bool bParam1)
{
	char* sVar0;

	if (bParam1)
	{
		if (!func_66(Local_52.f_1[iParam0]))
		{
			if (iParam0 == 9)
			{
				Local_52.f_1[iParam0] = func_157(func_156(iParam0), 2.742391E-34f, -5.604091E+09f, 0);
			}
			else if (iParam0 == 8)
			{
				Local_52.f_1[iParam0] = func_157(func_156(iParam0), -6.776603E-31f, -1.176228E+34f, 0);
			}
			else if (iParam0 == 3)
			{
				if (Local_52.f_93 == 0)
				{
					sVar0 = "CAM_FOCUS_LOCKE";
				}
				else
				{
					sVar0 = "CAM_FOCUS_LOCKD";
				}
				Local_52.f_1[iParam0] = func_159(sVar0, func_158(iParam0), 2, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
			}
			else
			{
				Local_52.f_1[iParam0] = func_159(func_156(iParam0), func_158(iParam0), 2, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
			}
			if (iParam0 == 4)
			{
				func_160(Local_52.f_1[iParam0], 11, 1, 1);
			}
			func_161(Local_52.f_1[iParam0], -1.178511E+08f, 0, 1);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[Local_52.f_1[iParam0] /*23*/].f_3, true);
		}
	}
	else if (func_66(Local_52.f_1[iParam0]))
	{
		func_103(&(Local_52.f_1[iParam0]), 1, 1);
	}
}

bool func_105(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_98(Global_1297553[iVar0 /*87*/].f_86, iParam1);
	}
	return false;
}

bool func_106(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_107(var uParam0)
{
	func_162(uParam0, 0f);
}

void func_108(var uParam0)
{
	fLocal_151 = PAD::GET_CONTROL_NORMAL(0, 120984.3f);
	if (fLocal_151 < -1102263091)
	{
		if (uParam0->f_15.f_3 < 1114636288)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 + 1058642330);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_28)
			{
				if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Zoom_In", Global_33, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("Zoom_In", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_28 = true;
			}
		}
		else if (bLocal_28)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_28 = false;
		}
	}
	else if (bLocal_28)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_28 = false;
	}
	if (fLocal_151 > 1045220557)
	{
		if (uParam0->f_15.f_3 > 1103626240)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 - 1058642330);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_29)
			{
				if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Zoom_Out", Global_33, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("Zoom_Out", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_29 = true;
			}
		}
		else if (bLocal_29)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_29 = false;
		}
	}
	else if (bLocal_29)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_29 = false;
	}
}

void func_109(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iLocal_47 == 0)
	{
		if (func_45(uParam0->f_1[3]))
		{
			if (AUDIO::PREPARE_SOUND_WITH_ENTITY("DOF_Change", Global_33, "CAMERA_SOUNDSET", -2))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY("DOF_Change", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
			}
			iLocal_48 = MISC::GET_GAME_TIMER();
			iLocal_47 = 1;
			iLocal_49 = 0;
		}
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_48) > 300 && iLocal_49 == 0)
	{
		if (uParam0->f_93 == 0)
		{
			uParam0->f_93 = 1;
			iVar0 = func_67(Local_52.f_1[3]);
			HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, "CAM_FOCUS_LOCKD");
		}
		else
		{
			uParam0->f_93 = 0;
			iVar1 = func_67(Local_52.f_1[3]);
			HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar1 /*23*/].f_3, "CAM_FOCUS_LOCKE");
		}
		CAM::_PAUSE_CAMERA_FOCUS(uParam0->f_14, uParam0->f_93);
		iLocal_49 = 1;
	}
	else
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_48) > 500)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_48) > 850)
		{
			iLocal_47 = 0;
			iLocal_49 = 0;
		}
	}
}

bool func_110(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_111(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_69(iParam0, 1);
	func_70(iParam0, 1);
	func_71(iParam0, 128);
}

bool func_112(var uParam0)
{
	return func_106(*uParam0, 2);
}

int func_113()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_114(var uParam0)
{
	float fVar0;

	if (CAM::DOES_CAM_EXIST(uParam0->f_14))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_14, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_14, false);
	}
	fLocal_204 = ENTITY::GET_ENTITY_HEADING(Global_33);
	uParam0->f_52 = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
	uParam0->f_55 = { ENTITY::GET_ENTITY_ROTATION(Global_33, 2) };
	uParam0->f_67 = { uParam0->f_55, uParam0->f_55.f_1, (uParam0->f_55.f_2 - 1127481344) };
	uParam0->f_61 = { vLocal_160 };
	uParam0->f_93 = 0;
	fLocal_166 = 0f;
	fLocal_205 = 1056964608; /* Float: 0.5f */
	vLocal_167 = { uParam0->f_67 };
	vLocal_167.x = (vLocal_167.x + 1f);
	uParam0->f_26.f_3 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_26.f_4 = 21030;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_14))
	{
		fVar0 = 1112014848; /* Float: 50f */
		uParam0->f_14 = CAM::CREATE_CAM_WITH_PARAMS("KIT_CAMERA", uParam0->f_61, uParam0->f_67, fVar0, true, 2);
	}
	uParam0->f_15 = 1103626240; /* Float: 25f */
	uParam0->f_15.f_1 = 2f;
	uParam0->f_15.f_2 = 1124073472; /* Float: 128f */
	uParam0->f_15.f_3 = 1106247680; /* Float: 30f */
	uParam0->f_15.f_4 = 1106247680; /* Float: 30f */
	uParam0->f_15.f_5 = 1119092736; /* Float: 90f */
	uParam0->f_15.f_6 = 1;
	uParam0->f_15.f_7 = 0;
	uParam0->f_15.f_8 = 1;
	uParam0->f_15.f_9 = 1;
	CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
	CAM::_PAUSE_CAMERA_FOCUS(uParam0->f_14, uParam0->f_93);
	CAM::ALLOW_MOTION_BLUR_DECAY(uParam0->f_14, false);
	CAM::SET_CAM_ACTIVE(uParam0->f_14, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_115()
{
	sLocal_180[0] = "portrait_normal";
	sLocal_180[1] = "portrait_happy";
	sLocal_180[2] = "portrait_pensive";
	sLocal_180[3] = "portrait_pensive_2";
	sLocal_180[4] = "portrait_relaxed";
	sLocal_180[5] = "portrait_angry";
	sLocal_180[6] = "portrait_angry_2";
	sLocal_180[7] = "portrait_annoyed";
}

void func_116()
{
	iLocal_193[0] = 0;
	iLocal_193[1] = 1;
	iLocal_193[2] = 2;
	iLocal_193[3] = 3;
	iLocal_193[4] = 4;
	iLocal_193[5] = 5;
	iLocal_193[6] = 6;
}

void func_117(var uParam0)
{
	fLocal_151 = PAD::GET_CONTROL_NORMAL(0, 120984.3f);
	if (fLocal_151 < -1102263091)
	{
		if (uParam0->f_15.f_3 < 1119092736)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 + 1063675494);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_28)
			{
				if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Zoom_In", Global_33, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("Zoom_In", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_28 = true;
			}
		}
		else if (bLocal_28)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
			bLocal_28 = false;
		}
	}
	else if (bLocal_28)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_In", "CAMERA_SOUNDSET");
		bLocal_28 = false;
	}
	if (fLocal_151 > 1045220557)
	{
		if (uParam0->f_15.f_3 > 1106247680)
		{
			uParam0->f_15.f_3 = (uParam0->f_15.f_3 - 1063675494);
			CAM::_0xE4B7945EF4F1BFB2(uParam0->f_14, &(uParam0->f_15));
			if (!bLocal_29)
			{
				if (AUDIO::PREPARE_SOUND_WITH_ENTITY("Zoom_Out", Global_33, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY("Zoom_Out", Global_33, "CAMERA_SOUNDSET", false, 0, 0);
				}
				bLocal_29 = true;
			}
		}
		else if (bLocal_29)
		{
			AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
			bLocal_29 = false;
		}
	}
	else if (bLocal_29)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("Zoom_Out", "CAMERA_SOUNDSET");
		bLocal_29 = false;
	}
}

bool func_118(int iParam0, int iParam1)
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

int func_119(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_163(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_14 != -1)
	{
		if (iParam0 == Global_1295619.f_5)
		{
			if (!Global_1295619.f_6)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 9.534398E+10f)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
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
				return 1;
			}
		}
	}
	return 0;
}

bool func_120(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_67(iParam0);
	return HUD::_UI_PROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1951897[iVar0 /*23*/].f_3, iParam1);
}

Vector3 func_121(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_122()
{
	bLocal_203 = true;
	iLocal_202 = MISC::GET_GAME_TIMER();
	iLocal_201 = 1;
	func_15();
}

void func_123(var uParam0)
{
	func_164(uParam0);
	switch (iLocal_193[uParam0->f_72])
	{
		case 0:
			break;
		case 1:
			func_165(3.892104E-09f, "WORLD_HUMAN_STARE_STOIC_MALE_A", 5.595E-27f);
			break;
		case 2:
			func_165(1.315808E+30f, "WORLD_HUMAN_STERNGUY", -4.13741E+12f);
			break;
		case 3:
			break;
		case 4:
			func_165(3.20297E+33f, "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", -2.10085E+18f);
			break;
		case 5:
			break;
		case 6:
			func_165(-1.854193E-06f, "WORLD_PLAYER_DYNAMIC_KNEEL_MALE_A", 1.907097E-13f);
			break;
	}
}

float func_124()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

bool func_125(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

int func_126(int iParam0)
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

bool func_127(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_128(bool bParam0)
{
	vector3 vVar0;

	if (!func_127(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_129(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_127(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_166(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_167("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_168(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_169(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_170(iVar1);
				return true;
			}
			iVar3++;
		}
		func_170(iVar1);
	}
	return false;
}

bool func_130(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_127(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_171(bParam0);
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
	iVar1 = func_172(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_173(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_174(bParam0);
	iVar2 = func_173(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_131(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_127(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_128(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_166(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_175(bParam0, 0);
	}
	if (func_176(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_177(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_178(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_177(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

void func_132(int iParam0)
{
	Global_1902883.f_302 = (Global_1902883.f_302 || iParam0);
}

char* func_133()
{
	return "proc_bounty_target";
}

struct<2> func_134(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_135(struct<2> Param0)
{
	return func_179(Param0);
}

void func_136(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_137(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_180(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_181(iParam0))
	{
		return false;
	}
	if (func_182(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_183(iParam0, 1)) || func_184(32768))
	{
		if (!func_183(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_185())
	{
		return false;
	}
	return true;
}

void func_138(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

int func_139()
{
	return 1124204544 /* Float: 130f */;
}

float func_140(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_141(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, func_133()) && DECORATOR::DECOR_GET_BOOL(iParam0, func_133()))
	{
		return false;
	}
	if (bParam1 && PED::_IS_ANIMAL_CONTROLLED_BY_A_PLAYER(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_INCAPACITATED(iParam0))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, true))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 580, true))
	{
		return true;
	}
	return false;
}

void func_142(int iParam0, int iParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iParam1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ITEMSET::IS_IN_ITEMSET(iParam0, iParam1))
		{
			ITEMSET::REMOVE_FROM_ITEMSET(iParam0, iParam1);
		}
	}
}

bool func_143(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return true;
}

bool func_144(int iParam0)
{
	int iVar0;

	iVar0 = func_186(iParam0);
	if (ENTITY::GET_IS_ANIMAL(iVar0) && !PED::_IS_ANIMAL_CONTROLLED_BY_A_PLAYER(iParam0))
	{
		return true;
	}
	return false;
}

bool func_145(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	if (((!PED::_IS_META_PED_FISH(iParam0) && !func_187(iParam0, 0)) && !func_188(iParam0)) && iVar0 != 1.917612E-19f)
	{
		return true;
	}
	return false;
}

bool func_146(int iParam0)
{
	if (func_98(Global_1300338, 4096))
	{
		switch (iParam0)
		{
			case joaat("A_C_CHICKEN_01"):
			case joaat("A_C_ELK_01"):
			case joaat("A_C_TURKEYWILD_01"):
			case joaat("A_C_BUCK_01"):
			case joaat("A_C_ALLIGATOR_01"):
			case joaat("A_C_ARMADILLO_01"):
			case joaat("A_C_BIGHORNRAM_01"):
			case joaat("A_C_POSSUM_01"):
			case joaat("A_C_SKUNK_01"):
			case joaat("A_C_BADGER_01"):
			case joaat("A_C_WOLF"):
			case joaat("A_C_BEAR_01"):
			case joaat("A_C_MOOSE_01"):
			case joaat("A_C_GOAT_01"):
			case joaat("A_C_TURTLESNAPPING_01"):
			case joaat("A_C_COW"):
			case joaat("A_C_SHEEP_01"):
			case joaat("A_C_COUGAR_01"):
			case joaat("A_C_FOX_01"):
			case joaat("A_C_GILAMONSTER_01"):
			case joaat("A_C_COYOTE_01"):
			case joaat("A_C_OX_01"):
			case joaat("A_C_BEARBLACK_01"):
			case joaat("A_C_BEAVER_01"):
			case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			case joaat("A_C_DOGAMERICANFOXHOUND_01"):
			case joaat("A_C_DEER_01"):
			case joaat("A_C_RACCOON_01"):
			case joaat("A_C_BUFFALO_01"):
			case joaat("A_C_PANTHER_01"):
			case joaat("A_C_PRONGHORN_01"):
			case joaat("A_C_BOAR_01"):
				return true;
		}
	}
	return false;
}

void func_147(int iParam0, int iParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iParam1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ITEMSET::IS_IN_ITEMSET(iParam0, iParam1))
		{
			ITEMSET::ADD_TO_ITEMSET(iParam0, iParam1);
		}
	}
}

int func_148(int iParam0)
{
	int iVar0;

	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		iVar0 = PED::_GET_PED_MODEL_SIZE_FROM_HASH(iParam0);
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_149(int iParam0)
{
	return (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0));
}

bool func_150(int iParam0)
{
	return (PED::_IS_PED_VISIBILITY_TRACKED(iParam0) && PED::IS_TRACKED_PED_VISIBLE(iParam0));
}

void func_151(int iParam0)
{
	int iVar0;

	iVar0 = func_186(iParam0);
	if (PED::_IS_PED_VISIBILITY_TRACKED(iParam0))
	{
		PED::RELEASE_PED_VISIBILITY_TRACKING(iParam0);
	}
	func_142(iVar0, Global_1300338.f_1);
}

bool func_152(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_186(iParam0);
	if (((((func_149(iVar0) && !func_141(iParam0, 1)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_33, iVar0, 3455)) && func_193(iParam0, func_189(), func_190(), func_191(), func_192())) && func_150(iParam0)) && func_194(iParam0) >= func_195(iParam1))
	{
		return true;
	}
	return false;
}

bool func_153(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_186(iParam0);
	if (((func_149(iVar0) && !func_141(iParam0, 1)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_33, iVar0, 3455)) && func_193(iParam0, func_189(), func_190(), func_191(), func_192()))
	{
		if (!PED::_IS_PED_VISIBILITY_TRACKED(iParam0))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
		}
		else if (func_150(iParam0) && func_194(iParam0) >= func_195(iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_154(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_155(int iParam0)
{
	if (!func_196(iParam0))
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

char* func_156(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "CAM_PUT_AWAY";
		case 0:
			return "CAM_HANDHELD";
		case 3:
			return "CAM_FOCUS_LOCK";
		case 1:
			return "CAM_SELFIE";
		case 8:
			return "CAM_POSES";
		case 9:
			return "CAM_EXPRESSIONS";
		case 7:
			return "CAM_BACK";
		case 6:
			return "CAM_TAKE_PHOTO";
		case 4:
			return "CAM_ZOOM";
		case 5:
			return "CAM_GALLERY";
		default:
			break;
	}
	return "INVALID_USE_CONTEXT";
}

int func_157(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_110(iVar0, 2))
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
		func_111(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 2f, 0, 1f, 0, 0, iParam2, 8.750548E+22f, 0);
		return iVar1;
	}
	return 0;
}

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2.874249E+19f;
		case 7:
			return -8.216329E-17f;
		case 0:
			return 4.85557E+33f;
		case 3:
			return 4.801259E-10f;
		case 1:
			return -3.085694E-12f;
		case 4:
			return 120984.3f;
		case 8:
			return 2.742391E-34f;
		case 9:
			return -6.776603E-31f;
		case 6:
			return 2000.649f;
		case 5:
			return -3.389725E+24f;
		default:
			break;
	}
	return 0;
}

int func_159(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9, int iParam10, bool bParam11)
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
		if (func_110(iVar0, 2))
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
		func_111(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, fParam9, 0, 1f, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_160(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_66(iParam0))
	{
		return;
	}
	iVar0 = func_67(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1951897[iVar0 /*23*/].f_3, iParam1, bParam2);
}

void func_161(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_66(iParam0))
	{
		return;
	}
	iVar0 = func_67(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1951897[iVar0 /*23*/].f_3, iParam1, iParam2);
}

void func_162(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_124() - fParam1);
	func_197(uParam0, 1);
	func_198(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_163(bool bParam0, bool bParam1, bool bParam2)
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

void func_164(var uParam0)
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
	if (func_56())
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
	}
	ENTITY::SET_ENTITY_HEADING(Global_33, fLocal_204);
}

void func_165(int iParam0, char* sParam1, int iParam2)
{
	if (func_43() == 0)
	{
		if (iParam0 == 0)
		{
			return;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			return;
		}
		if (iParam2 == 0)
		{
			return;
		}
		if (!func_118(Global_33, 3.034861E-30f))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_19);
			TASK::TASK_START_SCENARIO_IN_PLACE_HASH(0, iParam0, 0, true, 0, -1f, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_19);
			TASK::TASK_PERFORM_SEQUENCE(Global_33, iLocal_19);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_19);
		}
	}
	else
	{
		iLocal_206 = TASK::CREATE_SCENARIO_POINT_HASH(iParam0, vLocal_154, fLocal_204, 0, 0, true);
		TASK::_SET_SCENARIO_POINT_FLAG(iLocal_206, 25, true);
		TASK::_SET_SCENARIO_POINT_FLAG(iLocal_206, 23, true);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_19);
		TASK::TASK_USE_SCENARIO_POINT(0, iLocal_206, sParam1, -1, false, true, 0, false, 0f, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_19);
		TASK::TASK_PERFORM_SEQUENCE(Global_33, iLocal_19);
	}
}

bool func_166(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_127(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_128(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_199(bParam0, 9.811189E+11f))
	{
		func_200(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

bool func_167(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_177(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_168(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_169(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != -3.273909E-18f);
}

int func_170(int iParam0)
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

int func_171(bool bParam0)
{
	struct<2> Var0;

	if (!func_127(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_172(bool bParam0)
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

int func_173(var uParam0, int iParam1)
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

int func_174(bool bParam0)
{
	int iVar0;

	iVar0 = func_171(bParam0);
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

int func_175(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_201(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_203(&Var0, func_202(0));
	}
	if (!func_204(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_170(iVar18);
	return iVar19;
}

int func_176(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_206(func_205(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_177(bool bParam0)
{
	if (func_43() == -1)
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

struct<4> func_178(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_207(bParam0, bParam1, 0) };
	return func_208(bParam0, Var0, Var0.f_4, bParam1);
}

int func_179(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_209(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_180(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_181(int iParam0)
{
	if (func_183(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_182(int iParam0)
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

bool func_183(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_184(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_185()
{
	if (!func_210())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

int func_186(int iParam0)
{
	return iParam0;
}

bool func_187(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 58))
	{
		if (bParam1)
		{
			return ENTITY::IS_ENTITY_IN_AIR(iParam0, 1);
		}
		return true;
	}
	return false;
}

bool func_188(int iParam0)
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

int func_189()
{
	return 1050253722 /* Float: 0.3f */;
}

int func_190()
{
	return 1060320051 /* Float: 0.7f */;
}

int func_191()
{
	return 1045220557 /* Float: 0.2f */;
}

int func_192()
{
	return 1060320051 /* Float: 0.7f */;
}

bool func_193(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_211(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

float func_194(int iParam0)
{
	return (func_212(iParam0) * 1120403456);
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1008981770 /* Float: 0.01f */;
		case 1:
			return 1017370378 /* Float: 0.02f */;
		case 2:
			return 1017370378 /* Float: 0.02f */;
		case 3:
			return 1022739087 /* Float: 0.03f */;
		case 4:
			return 1022739087 /* Float: 0.03f */;
	}
	return 1022739087 /* Float: 0.03f */;
}

bool func_196(int iParam0)
{
	return func_110(iParam0, 2);
}

void func_197(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_198(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_199(bool bParam0, int iParam1)
{
	if (!func_127(bParam0, 0))
	{
		return func_213(func_205(bParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 104.1169f))
	{
		return 1;
	}
	return 0;
}

void func_200(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_201(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_202(bool bParam0)
{
	int iVar0;

	iVar0 = func_177(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_208(8.681942E-06f, func_214(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_208(8.681942E-06f, func_214(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_208(8.681942E-06f, func_214(bParam0), -1.942248E+12f, 0);
}

void func_203(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_204(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_177(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_205(bool bParam0)
{
	return bParam0;
}

bool func_206(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

struct<5> func_207(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_214(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_128(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_208(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_202(bParam1) };
			if (iParam2 && func_215(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_216(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_216(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_217(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_218(bParam1) };
			switch (func_171(bParam0))
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
			if (func_219(bParam0, -2.580501E-27f))
			{
				Var0 = { func_208(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_219(bParam0, -4.220332E-15f))
			{
				Var0 = { func_208(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_208(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_219(bParam0, -3.171238E-21f))
			{
				Var0 = { func_208(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_220(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_219(bParam0, -3.171238E-21f))
			{
				Var0 = { func_208(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<4> func_208(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_127(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_177(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_209(struct<2> Param0, bool bParam2)
{
	if (!func_221(Param0))
	{
		return false;
	}
	func_222(bParam2);
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

bool func_210()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_211(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	int iVar2;

	iVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (iVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

float func_212(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	struct<2> Var7;
	struct<2> Var10;
	float fVar13;
	float fVar14;
	float fVar15;

	iVar0 = func_186(iParam0);
	ENTITY::_GET_ENTITY_WORLD_POSITION_OF_DIMENSIONS(iVar0, &vVar1, &vVar4);
	if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar1, &Var7, &(Var7.f_1)) || !GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar4, &Var10, &(Var10.f_1)))
	{
		return 0f;
	}
	fVar13 = MISC::ABSF((Var10 - Var7));
	fVar14 = MISC::ABSF((Var10.f_1 - Var7.f_1));
	fVar15 = (fVar13 * fVar14);
	return fVar15;
}

int func_213(bool bParam0, int iParam1)
{
	if (!func_206(bParam0, 2))
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

struct<4> func_214(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_177(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_208(2.982335E+09f, func_223(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_208(2.982335E+09f, func_223(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_208(2.982335E+09f, func_223(), -5.45926E-19f, bParam0);
}

int func_215(bool bParam0, bool bParam1)
{
	if (func_171(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_224();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_216(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_225(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_217(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_226(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_218(bool bParam0)
{
	int iVar0;

	iVar0 = func_177(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_208(3.507197E-29f, func_214(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_208(3.507197E-29f, func_214(bParam0), 12999093, 0);
}

bool func_219(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_171(bParam0);
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
			if (func_227(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_220(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_228(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_221(struct<2> Param0)
{
	if (!func_229(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_230(Param0))
	{
		return false;
	}
	return true;
}

void func_222(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

struct<4> func_223()
{
	struct<4> Var0;

	return Var0;
}

int func_224()
{
	if (func_231(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_225(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_127(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_176(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_208(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_177(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_177(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_226(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_177(0);
	*iParam1 = { func_208(bParam0, func_202(0), fParam3, 0) };
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

bool func_227(bool bParam0, int iParam1, int iParam2)
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

int func_228(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_177(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_229(int iParam0)
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

int func_230(int iParam0)
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

int func_231(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_232(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_177(bParam1), iParam0, bParam3);
}

bool func_232(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

