/* Entry 0x08847F10 | file offset 0x00044EE8 | FUN_08847f10 | bytes 348 */

undefined4 FUN_08847f10(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  
  if (((*(uint *)(param_1 + 0x18) & 0x400) != 0) ||
     (bVar1 = false, (*(uint *)(param_1 + 0x18) & 0x800) != 0)) {
    bVar1 = true;
  }
  if ((!bVar1) && (*(short *)(param_1 + 0x1c) == 0)) {
    return 0;
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    iVar2 = FUN_088374b0(param_2);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else if ((*(char *)(param_1 + 5) == '\x02') && (iVar2 = FUN_088374b0(param_2), iVar2 != 0)) {
    return 0;
  }
  if (param_3 != 0) {
    if ((*(char *)(param_1 + 6) == '\x01') && (iVar2 = FUN_088374b0(param_3), iVar2 == 0)) {
      return 0;
    }
    if ((*(char *)(param_1 + 6) == '\x02') && (iVar2 = FUN_088374b0(param_3), iVar2 != 0)) {
      return 0;
    }
  }
  return 1;
}

