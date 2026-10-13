/* Entry 0x088377D0 | file offset 0x000347A8 | FUN_088377d0 | bytes 236 */

undefined4 FUN_088377d0(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (((*(byte *)(param_1 + 400) & 0x20) != 0) ||
     (bVar1 = false, (*(byte *)(param_1 + 400) & 0x40) != 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = *(uint *)(param_1 + 0x38c);
  }
  else {
    if ((*(uint *)(param_1 + 0x380) & 0x20000000) == 0) {
      return 0;
    }
    uVar3 = *(uint *)(param_1 + 0x38c);
  }
  if (((uVar3 & 8) == 0) &&
     ((iVar2 = FUN_0883739c(param_1), iVar2 != 1 || ((*(byte *)(param_1 + 0x5b6) & 0x20) == 0)))) {
    uVar4 = 1;
  }
  return uVar4;
}

