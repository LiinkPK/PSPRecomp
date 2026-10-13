/* Entry 0x08886744 | file offset 0x0008371C | FUN_08886744 | bytes 224 */

void FUN_08886744(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  int local_1c;
  
  local_1c = param_1;
  func_0x08ae3898();
  func_0x08af0908();
  func_0x08aecf20();
  func_0x08aecb54();
  func_0x08adca88();
  func_0x08aee0e0();
  iVar2 = (int)DAT_09afdfa8;
  iVar3 = (int)DAT_09afdfaa;
  uVar1 = FUN_088908e0();
  uVar1 = func_0x08b18c68(auStack_20,iVar2,iVar3,uVar1);
  *(undefined4 *)(local_1c + 0x50) = uVar1;
  iVar3 = (int)DAT_09afdfac;
  iVar2 = (int)DAT_09afdfae;
  uVar1 = FUN_088908e0();
  uVar1 = func_0x08b18e20(auStack_20,iVar3,iVar2,uVar1);
  *(undefined4 *)(local_1c + 0x54) = uVar1;
  FUN_0885eb34(local_1c + 0x5c,0,0,0,0);
  *(undefined4 *)(local_1c + 0xb8) = 0xffffffff;
  return;
}

