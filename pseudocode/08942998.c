/* Entry 0x08942998 | file offset 0x0013F970 | FUN_08942998 | bytes 184 */

void FUN_08942998(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(*param_1 + 0x20);
  if (0 < iVar3) {
    iVar1 = 0;
    do {
      (**(code **)(*(int *)(param_2 + 0x24) + 0x4c))
                (param_2 + *(short *)(*(int *)(param_2 + 0x24) + 0x48),
                 *(undefined4 *)(*param_1 + *(int *)(*param_1 + 0x30) + iVar1 + 4));
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*param_1 + *(int *)(*param_1 + 0x30) + iVar1 + 4) = 0xffffffff;
      iVar1 = iVar1 + 8;
    } while (iVar2 < iVar3);
  }
  return;
}

