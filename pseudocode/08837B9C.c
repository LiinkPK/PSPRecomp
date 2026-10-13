/* Entry 0x08837B9C | file offset 0x00034B74 | FUN_08837b9c | bytes 168 */

undefined4 FUN_08837b9c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(uint *)(param_1 + 900) & 0x40000) == 0) || (iVar1 = FUN_088377c0(param_1), iVar1 != 0)) {
    uVar2 = 0;
    if ((((*(byte *)(param_1 + 400) & 1) != 0) || ((*(byte *)(param_1 + 0x198) & 2) != 0)) &&
       (iVar1 = FUN_08837310(param_1), iVar1 == 0)) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

