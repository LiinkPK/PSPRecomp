/* Entry 0x08939868 | file offset 0x00136840 | FUN_08939868 | bytes 116 */

undefined4 FUN_08939868(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  
  iVar4 = param_2 + -1;
  if ((0 < param_2) && (0x34 < *(ushort *)(param_1 + iVar4 * 2))) {
    psVar3 = (short *)(param_1 + iVar4 * 2);
    do {
      iVar2 = iVar4 * 2;
      iVar4 = iVar4 + -1;
      psVar3 = psVar3 + -1;
      *(undefined2 *)(param_1 + iVar2) = 0x30;
      sVar1 = *psVar3;
      if (iVar4 < 1) break;
    } while (sVar1 == 0x39);
    if (sVar1 == 0x39) {
      return 0;
    }
    *psVar3 = sVar1 + 1;
  }
  return 1;
}

