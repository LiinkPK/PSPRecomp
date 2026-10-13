/* Entry 0x0899EA84 | file offset 0x0019BA5C | FUN_0899ea84 | bytes 104 */

ushort * FUN_0899ea84(int param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar1 = (ushort *)0x0;
  if (param_1 != 0) {
    puVar2 = (ushort *)(param_1 + *(int *)(param_1 + 8));
    while ((puVar1 = (ushort *)0x0, puVar2 < (ushort *)(param_1 + *(int *)(param_1 + 4)) &&
           (((param_2 != 0 && (*puVar2 != param_2)) ||
            (param_3 = param_3 + -1, puVar1 = puVar2, param_3 != -1))))) {
      puVar2 = (ushort *)((int)puVar2 + *(int *)(puVar2 + 2));
    }
  }
  return puVar1;
}

