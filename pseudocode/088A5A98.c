/* Entry 0x088A5A98 | file offset 0x000A2A70 | FUN_088a5a98 | bytes 412 */

void FUN_088a5a98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 uStackX_0,undefined4 uStackX_4,undefined4 uStackX_8)

{
  FUN_088823c4(param_1,param_2,param_4,FUN_088a5c34,"EFFECT_MANAGER::ExecBefore");
  FUN_088823c4(param_1,param_2,param_5,FUN_088a5c54,"EFFECT_MANAGER::ExecAfter");
  FUN_088823c4(param_1,param_2,param_5 + 1,FUN_088a5d18,"EFFECT_MANAGER::MainTask");
  FUN_088823c4(param_1,param_3,param_6,FUN_088a5c74,"EFFECT_MANAGER::DrawFirst");
  FUN_088823c4(param_1,param_3,param_7,FUN_088a5c94,"EFFECT_MANAGER::DrawSecond");
  FUN_088823c4(param_1,param_3,param_8,FUN_088a5cb4,"EFFECT_MANAGER::DrawBefore");
  FUN_088823c4(param_1,param_3,uStackX_0,FUN_088a5cd4,"EFFECT_MANAGER::DrawAfter");
  FUN_088823c4(param_1,param_3,uStackX_4,FUN_088a5d38,"EFFECT_MANAGER::CaptureBefore");
  FUN_088823c4(param_1,param_3,uStackX_8,FUN_088a5d58,"EFFECT_MANAGER::CaptureAfter");
  return;
}

