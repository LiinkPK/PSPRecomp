/* Entry 0x0890BF94 | file offset 0x00108F6C | FUN_0890bf94 | bytes 200 */

int FUN_0890bf94(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0890b740(param_1,param_3);
  *(undefined **)(param_1 + 4) = &DAT_089cdf18;
  FUN_08993560(param_1 + 8,0x10,0x10,FUN_0890b6c4);
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  iVar3 = 0;
  iVar2 = param_1;
  do {
    uVar1 = FUN_0885c6cc(param_3,param_2,0,0,1,0);
    *(undefined4 *)(iVar2 + 0x10) = uVar1;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x10);
  return param_1;
}

