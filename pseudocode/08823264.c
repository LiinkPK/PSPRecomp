/* Entry 0x08823264 | file offset 0x0002023C | FUN_08823264 | bytes 264 */

void FUN_08823264(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < (int)(((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80)) {
    iVar4 = 0;
    do {
      uVar1 = FUN_0881baa8();
      piVar2 = (int *)FUN_0881ba98(uVar1);
      iVar3 = *piVar2 * 0x343fd + 0x269ec3;
      *piVar2 = iVar3;
      iVar5 = iVar5 + 1;
      *(float *)(*(int *)(param_1 + 0x28) + iVar4 + 0x11c) =
           (float)(int)((iVar3 >> 0x10 & 0x7fffU) % 0x2711 - 5000) / 5000.0;
      iVar4 = iVar4 + 0x130;
    } while (iVar5 < (int)(((*(uint *)(param_1 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80));
  }
  return;
}

