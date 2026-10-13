/* Entry 0x089B4970 | file offset 0x001B1948 | FUN_089b4970 | bytes 132 */

int FUN_089b4970(short *param_1,uint param_2)

{
  ushort *puVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  
  if (param_1 != (short *)0x0) {
    puVar3 = (ushort *)(*(int *)(param_1 + 2) + (int)param_1);
    puVar1 = puVar3;
    if (-1 < *param_1) {
      puVar1 = (ushort *)((int)param_1 + *(int *)(param_1 + 4));
    }
    iVar4 = 0;
    if (puVar1 < puVar3) {
      do {
        if (param_2 == 0) {
          iVar2 = *(int *)(puVar1 + 2);
LAB_089b49d4:
          iVar4 = iVar4 + 1;
        }
        else {
          iVar2 = *(int *)(puVar1 + 2);
          if (param_2 == (*puVar1 & 0xffff7fff)) goto LAB_089b49d4;
        }
        puVar1 = (ushort *)((int)puVar1 + iVar2);
        if (puVar3 <= puVar1) {
          return iVar4;
        }
      } while( true );
    }
  }
  return 0;
}

