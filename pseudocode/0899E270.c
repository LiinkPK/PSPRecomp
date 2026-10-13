/* Entry 0x0899E270 | file offset 0x0019B248 | FUN_0899e270 | bytes 180 */

int FUN_0899e270(undefined4 param_1,byte *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0899e324();
  uVar1 = FUN_0899e324(uVar1,param_2 + 1);
  uVar1 = FUN_0899e324(uVar1,param_2 + 2);
  uVar1 = FUN_0899e334(uVar1,param_2 + 4);
  uVar1 = FUN_0899e334(uVar1,param_2 + 6);
  uVar1 = FUN_0899e324(uVar1,param_2 + 8);
  uVar1 = FUN_0899e334(uVar1,param_2 + 10);
  uVar1 = FUN_0899e334(uVar1,param_2 + 0xc);
  uVar1 = FUN_0899e334(uVar1,param_2 + 0xe);
  uVar1 = FUN_0899e334(uVar1,param_2 + 0x10);
  uVar1 = FUN_0899e324(uVar1,param_2 + 0x12);
  iVar2 = FUN_0899e324(uVar1,param_2 + 0x13);
  return iVar2 + (uint)*param_2;
}

