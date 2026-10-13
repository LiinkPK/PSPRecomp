/* Entry 0x08927528 | file offset 0x00124500 | FUN_08927528 | bytes 164 */

void FUN_08927528(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  param_1[1] = param_2;
  uVar1 = FUN_08862c40("original_quest_param.bin",1);
  uVar2 = FUN_0885c6cc(param_1[1],uVar1,0,0,1,0);
  *param_1 = uVar2;
  FUN_08862854("original_quest_param.bin",uVar2,uVar1,1);
  param_1[4] = *param_1;
  FUN_0885c93c();
  iVar3 = FUN_0885ca3c(param_1[4],1,0);
  param_1[3] = *(undefined4 *)(iVar3 + 8);
  return;
}

