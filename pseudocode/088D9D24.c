/* Entry 0x088D9D24 | file offset 0x000D6CFC | FUN_088d9d24 | bytes 184 */

void FUN_088d9d24(int param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x20);
  if ((((*(short *)(param_1 + 0xc) == -1) || (*(char *)(param_1 + 0x2b) == '\0')) ||
      ((*(ushort *)(param_1 + 0x20) & 8) == 0)) || ((uVar1 & 0x4000) != 0)) {
    *(ushort *)(param_1 + 0x20) = uVar1 & 0x7fff;
    uVar1 = *(ushort *)(param_1 + 0x20);
  }
  else {
    *(ushort *)(param_1 + 0x20) = uVar1 | 0x8000;
    uVar1 = *(ushort *)(param_1 + 0x20);
  }
  if (((*(short *)(param_1 + 0xc) == -1) || ((*(ushort *)(param_1 + 0x20) & 8) == 0)) ||
     ((uVar1 & 0x20) != 0)) {
    *(ushort *)(param_1 + 0x20) = uVar1 & 0xfffe;
  }
  else {
    *(ushort *)(param_1 + 0x20) = uVar1 | 1;
  }
  return;
}

