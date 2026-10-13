/* Entry 0x089404A8 | file offset 0x0013D480 | FUN_089404a8 | bytes 128 */

int FUN_089404a8(ushort *param_1,uint param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (ushort *)0x0) {
    iVar2 = 0;
    puVar1 = (ushort *)((int)param_1 + *(int *)(param_1 + 2));
    if ((*param_1 & 0x8000) == 0) {
      puVar1 = (ushort *)((int)param_1 + *(int *)(param_1 + 4));
    }
    for (; puVar1 < (ushort *)((int)param_1 + *(int *)(param_1 + 2));
        puVar1 = (ushort *)((int)puVar1 + iVar3)) {
      if ((param_2 == 0) || ((*puVar1 & 0xffff7fff) == param_2)) {
        iVar2 = iVar2 + 1;
        iVar3 = *(int *)(puVar1 + 2);
      }
      else {
        iVar3 = *(int *)(puVar1 + 2);
      }
    }
    return iVar2;
  }
  return 0;
}

