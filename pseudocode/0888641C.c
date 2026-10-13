/* Entry 0x0888641C | file offset 0x000833F4 | FUN_0888641c | bytes 92 */

undefined4 FUN_0888641c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*param_1 == 0) || (iVar2 = param_1[1], iVar2 == 0)) {
    uVar1 = 0;
  }
  else if ((*(short *)(iVar2 + 0xc) == 2) && ((*(ushort *)(iVar2 + 0x20) & 0x20) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

