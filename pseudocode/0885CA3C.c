/* Entry 0x0885CA3C | file offset 0x00059A14 | FUN_0885ca3c | bytes 92 */

ushort * FUN_0885ca3c(ushort *param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  bool bVar2;
  int iVar3;
  
  puVar1 = param_1 + 2;
  iVar3 = 0;
  if (0 < *(int *)puVar1) {
    do {
      param_1 = param_1 + 8;
      if (((param_2 == 0xffff) || (*param_1 == param_2)) &&
         (bVar2 = param_3 == 0, param_3 = param_3 + -1, bVar2)) {
        return param_1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)puVar1);
  }
  return (ushort *)0x0;
}

