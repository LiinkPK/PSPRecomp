/* Entry 0x08868608 | file offset 0x000655E0 | FUN_08868608 | bytes 168 */

void FUN_08868608(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined4 local_20;
  
  FUN_089a3868(auStack_30);
  local_2c = 0;
  uVar1 = FUN_089a3bf8(auStack_30);
  local_20 = FUN_089a457c(-(float)param_2[1],uVar1);
  uVar1 = FUN_089a457c(*param_2,param_2[2]);
  param_1[1] = uVar1;
  *param_1 = local_20;
  param_1[2] = 0;
  param_1[3] = 0x3f800000;
  return;
}

