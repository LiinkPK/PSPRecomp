/* Entry 0x0885C9A4 | file offset 0x0005997C | FUN_0885c9a4 | bytes 64 */

int FUN_0885c9a4(ushort *param_1,uint param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = param_1 + 2;
  iVar3 = 0;
  iVar2 = 0;
  if (0 < *(int *)puVar1) {
    do {
      param_1 = param_1 + 8;
      if (*param_1 == param_2) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)puVar1);
  }
  return iVar2;
}

