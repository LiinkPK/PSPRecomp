/* Entry 0x08841CC0 | file offset 0x0003EC98 | FUN_08841cc0 | bytes 500 */

void FUN_08841cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 uStackX_0,undefined4 uStackX_4,undefined4 uStackX_8,undefined4 uStackX_c
                 ,undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0888232c(DAT_089d4958[2],"ObjMng");
  *DAT_089d4958 = uVar1;
  iVar2 = FUN_088823c4(*DAT_089d4958,0,0,FUN_088413d0,"OBJ_MANAGER::ExecTask");
  *(code **)(iVar2 + 0x30) = FUN_088416ec;
  iVar2 = FUN_088823c4(param_1,param_2,param_3,FUN_08841798,"OBJ_MANAGER::ExecAllTask");
  *(code **)(iVar2 + 0x30) = FUN_088417c8;
  iVar2 = FUN_088823c4(param_1,param_4,param_5,FUN_088417f8,"OBJ_MANAGER::DestroyTask");
  *(code **)(iVar2 + 0x30) = FUN_08841950;
  FUN_088823c4(param_1,param_6,param_7,FUN_0884197c,"OBJ_MANAGER::DrawTask");
  FUN_088823c4(param_1,param_8,uStackX_0,FUN_08841998,"OBJ_MANAGER::DrawShadowTask");
  FUN_088823c4(param_1,uStackX_4,uStackX_8,FUN_088419b4,"OBJ_MANAGER::DrawAfterShadowTask");
  FUN_088823c4(param_1,param_14,param_15,FUN_08841680,"OBJ_MANAGER::AfterAttack");
  FUN_088823c4(param_1,param_16,param_17,FUN_088419d0,"OBJ_MANAGER::AddDrawTask");
  FUN_088823c4(param_1,param_18,param_19,FUN_088419ec,"OBJ_MANAGER::DrawAlphaScreenTask");
  FUN_08808424(param_1,uStackX_c,param_13);
  return;
}

