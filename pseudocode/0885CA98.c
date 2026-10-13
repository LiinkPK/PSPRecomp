/* Entry 0x0885CA98 | file offset 0x00059A70 | FUN_0885ca98 | bytes 100 */

ushort * FUN_0885ca98(ushort *param_1,uint param_2,int param_3,int param_4)

{
  ushort *puVar1;
  bool bVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = param_1 + 2;
  iVar4 = 0;
  if (0 < *(int *)puVar1) {
    do {
      puVar3 = param_1 + 8;
      if (param_2 == 0xffff) {
        iVar5 = *(int *)(param_1 + 10);
LAB_0885cacc:
        if ((iVar5 == param_3) && (bVar2 = param_4 == 0, param_4 = param_4 + -1, bVar2)) {
          return puVar3;
        }
      }
      else if (*puVar3 == param_2) {
        iVar5 = *(int *)(param_1 + 10);
        goto LAB_0885cacc;
      }
      iVar4 = iVar4 + 1;
      param_1 = puVar3;
    } while (iVar4 < *(int *)puVar1);
  }
  return (ushort *)0x0;
}

