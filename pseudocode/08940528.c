/* Entry 0x08940528 | file offset 0x0013D500 | FUN_08940528 | bytes 136 */

ushort * FUN_08940528(ushort *param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  
  if (param_1 != (ushort *)0x0) {
    puVar1 = (ushort *)((int)param_1 + *(int *)(param_1 + 2));
    if ((*param_1 & 0x8000) == 0) {
      puVar1 = (ushort *)((int)param_1 + *(int *)(param_1 + 4));
    }
    for (; puVar1 < (ushort *)((int)param_1 + *(int *)(param_1 + 2));
        puVar1 = (ushort *)((int)puVar1 + iVar2)) {
      if ((param_2 == 0) || ((*puVar1 & 0xffff7fff) == param_2)) {
        param_3 = param_3 + -1;
        if (param_3 == -1) {
          return puVar1;
        }
        iVar2 = *(int *)(puVar1 + 2);
      }
      else {
        iVar2 = *(int *)(puVar1 + 2);
      }
    }
  }
  return (ushort *)0x0;
}

