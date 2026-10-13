/* Entry 0x088A9E90 | file offset 0x000A6E68 | FUN_088a9e90 | bytes 188 */

void FUN_088a9e90(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 auStack_a4 [128];
  
  local_b0 = param_2;
  local_ac = param_3;
  iVar1 = FUN_08935a0c(param_2 + 4,&DAT_089cb290,1);
  if (iVar1 == 0) {
    local_a8 = 8;
  }
  else {
    local_a8 = FUN_089359e8(param_2 + 4);
  }
  FUN_088aa844(param_1,auStack_a4,0x20,&local_b0,param_2,param_4,param_5);
  return;
}

