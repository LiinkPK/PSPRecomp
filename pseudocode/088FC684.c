/* Entry 0x088FC684 | file offset 0x000F965C | FUN_088fc684 | bytes 76 */

void FUN_088fc684(int param_1,short param_2,ushort param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = 0;
  do {
    if (*(short *)(iVar1 + 0x592) == param_2) {
      *(ushort *)(iVar1 + 0x594) = *(ushort *)(iVar1 + 0x594) & ~param_3;
      return;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x32);
  return;
}

