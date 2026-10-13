/* Entry 0x089151A8 | file offset 0x00112180 | FUN_089151a8 | bytes 116 */

void FUN_089151a8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      uVar1 = (uint)*(short *)(*(int *)(param_1 + 0x54) + 0x68 + iVar2);
      if (-1 < (int)uVar1) {
        puVar4 = (uint *)(DAT_089d726c + (uVar1 >> 5) * 4);
        *puVar4 = *puVar4 | 1 << (uVar1 & 0x1f);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 2;
    } while (iVar3 < 0xe);
  }
  *(undefined1 *)(param_1 + 0x7d9) = 1;
  return;
}

