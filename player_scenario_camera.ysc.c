#region Local Var
	struct<45> Local_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_45 = ScriptParam_0;
	iLocal_46 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	while (func_2())
	{
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	SCRIPTS::_0xE7282390542F570D(iLocal_45);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !TASK::DOES_SCENARIO_POINT_EXIST(iLocal_46)) || !PED::IS_PED_USING_THIS_SCENARIO(PLAYER::PLAYER_PED_ID(), iLocal_46))
	{
		func_3();
		return 0;
	}
	return func_4();
}

void func_3()
{
	if (Local_0.f_44)
	{
		if (CAM::_IS_CAM_DATA_DICT_LOADED(&(Local_0.f_1)))
		{
			CAM::_UNLOAD_CAMERA_DATA_DICT(&(Local_0.f_1));
		}
		if (CAM::_IS_CAMERA_AVAILABLE(&(Local_0.f_1)))
		{
			CAM::_CAM_DESTROY(&(Local_0.f_1));
		}
		Local_0.f_44 = 0;
	}
	if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(Local_0.f_34))
	{
		DATAFILE::_PARSEDDATA_UNLOAD_FILE(Local_0.f_34);
	}
}

int func_4()
{
	switch (Local_0)
	{
		case 0:
			Local_0.f_32 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false);
			if (!TASK::DOES_SCENARIO_POINT_EXIST(Local_0.f_32))
			{
				return 0;
			}
			Local_0.f_33 = TASK::_GET_SCENARIO_POINT_ENTITY(Local_0.f_32);
			Local_0.f_34 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(5.397817E-36f);
			Local_0.f_35 = TASK::_GET_SCENARIO_POINT_TYPE(Local_0.f_32);
			Local_0 = 1;
			break;
		case 1:
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) && DATAFILE::PARSEDDATA_IS_FILE_LOADED(Local_0.f_34))
			{
				func_5();
				if (!func_6())
				{
					func_3();
					Local_0 = 5;
					return 0;
				}
				DATAFILE::_PARSEDDATA_UNLOAD_FILE(Local_0.f_34);
				func_7("player_scenario_orbit_cam", &(Local_0.f_36));
				Local_0 = 2;
			}
			break;
		case 2:
			if (func_8())
			{
				Local_0 = 3;
			}
			break;
		case 3:
			if (Local_0.f_33 != 0)
			{
				CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(Local_0.f_33);
			}
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))
			{
				Local_0 = 4;
			}
			break;
		case 4:
			func_3();
			Local_0 = 5;
			break;
		case 5:
			return 0;
	}
	return 1;
}

void func_5()
{
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Local_0.f_34, -2.201975E-08f, "CameraData/Scenarios/Camera");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Local_0.f_34, 6.904846E-29f, "CameraData/Scenarios/Camera(%i):scenario");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Local_0.f_34, -9.30851E+27f, "CameraData/Scenarios/Camera(%i):request");
}

bool func_6()
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	int iVar7;

	Var0 = Local_0.f_34;
	Var0.f_2 = -2.201975E-08f;
	iVar5 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&Var0);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		Var0.f_3 = iVar6;
		Var0.f_2 = 6.904846E-29f;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar7, &Var0);
		if (iVar7 == Local_0.f_35)
		{
			Var0.f_2 = -9.30851E+27f;
			DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(Local_0.f_36), &Var0);
			return true;
		}
		iVar6++;
	}
	return false;
}

void func_7(char* sParam0, char* sParam1)
{
	StringCopy(&(Local_0.f_1), sParam0, 64);
	StringCopy(&(Local_0.f_1.f_8), sParam1, 64);
	CAM::_LOAD_CAMERA_DATA_DICT(&(Local_0.f_1));
	Local_0.f_44 = 1;
}

bool func_8()
{
	if (CAM::_IS_CAM_DATA_DICT_LOADED(&(Local_0.f_1)) && !CAM::_IS_CAMERA_AVAILABLE(&(Local_0.f_1)))
	{
		CAM::_CAM_CREATE(&(Local_0.f_1));
		Local_0.f_1.f_16 = Global_33;
		Local_0.f_1.f_21 = 1;
		Local_0.f_1.f_22 = { 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(Local_0.f_32, true) };
		CAM::_0xAC77757C05DE9E5A(&(Local_0.f_1));
		return true;
	}
	return false;
}

