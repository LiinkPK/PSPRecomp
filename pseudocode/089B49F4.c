/* Entry 0x089B49F4 | file offset 0x001B19CC | FUN_089b49f4 | bytes 124 */

ushort * FUN_089b49f4(short *param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  
  if (param_1 != (short *)0x0) {
    puVar1 = (ushort *)(*(int *)(param_1 + 2) + (int)param_1);
    if (-1 < *param_1) {
      puVar1 = (ushort *)((int)param_1 + *(int *)(param_1 + 4));
    }
    for (; puVar1 < (ushort *)(*(int *)(param_1 + 2) + (int)param_1);
        puVar1 = (ushort *)((int)puVar1 + iVar2)) {
      if ((param_2 == 0) || (param_2 == (*puVar1 & 0xffff7fff))) {
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

