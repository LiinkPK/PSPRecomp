/* Entry 0x089AEE80 | file offset 0x001ABE58 | FUN_089aee80 | bytes 156 */

undefined4 FUN_089aee80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [112];
  
  FUN_089ab7a0(auStack_80);
  iVar1 = FUN_089ae5f8(param_1,param_2,param_3,auStack_80);
  if ((iVar1 == 0) || (iVar1 = FUN_089abd28(auStack_80), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_089aeb5c(param_1,param_2,param_3,auStack_80);
    FUN_089abca0(auStack_80);
  }
  return uVar2;
}

