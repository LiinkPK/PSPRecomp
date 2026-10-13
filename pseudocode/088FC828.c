/* Entry 0x088FC828 | file offset 0x000F9800 | FUN_088fc828 | bytes 84 */

int FUN_088fc828(int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x30);
  iVar2 = 0;
  psVar1 = (short *)(iVar3 + 0x18);
  if (0 < *psVar1) {
    do {
      if ((*(ushort *)(iVar3 + 0x1c) & 4) != 0) {
        *(ushort *)(iVar3 + 0x1c) = *(ushort *)(iVar3 + 0x1c) & 0xfffb;
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < *psVar1);
  }
  return -1;
}

