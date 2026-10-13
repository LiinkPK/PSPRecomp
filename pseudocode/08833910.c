/* Entry 0x08833910 | file offset 0x000308E8 | FUN_08833910 | bytes 236 */

void FUN_08833910(int param_1)

{
  int iVar1;
  float fVar2;
  
  *(int *)(param_1 + 0x324) = *(int *)(param_1 + 0x324) + 1;
  *(undefined2 *)(param_1 + 0x526) = *(undefined2 *)(param_1 + 0x524);
  FUN_08833658(param_1);
  iVar1 = param_1 + 0x130;
  if (((*(uint *)(param_1 + 0x380) & 1) == 0) && ((*(uint *)(param_1 + 0x380) & 0x80000) == 0)) {
    if ((*(uint *)(param_1 + 0x38c) & 0x100) == 0) {
      fVar2 = (float)FUN_08838300(param_1);
      FUN_08830444(fVar2 * *(float *)(param_1 + 0x3bc),iVar1);
    }
    else {
      FUN_08830444(*(float *)(DAT_089d69e0 + 0x18) * *(float *)(param_1 + 0x3bc),iVar1);
    }
  }
  else {
    FUN_08830444(0,iVar1);
  }
  return;
}

