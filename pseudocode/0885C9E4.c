/* Entry 0x0885C9E4 | file offset 0x000599BC | FUN_0885c9e4 | bytes 88 */

int FUN_0885c9e4(ushort *param_1,uint param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = param_1 + 2;
  iVar3 = 0;
  iVar2 = 0;
  if (0 < *(int *)puVar1) {
    do {
      if (param_2 == 0xffff) {
        iVar4 = *(int *)(param_1 + 10);
LAB_0885ca18:
        if (iVar4 == param_3) {
          iVar2 = iVar2 + 1;
        }
      }
      else if (param_1[8] == param_2) {
        iVar4 = *(int *)(param_1 + 10);
        goto LAB_0885ca18;
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 8;
    } while (iVar3 < *(int *)puVar1);
  }
  return iVar2;
}

