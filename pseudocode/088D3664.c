/* Entry 0x088D3664 | file offset 0x000D063C | FUN_088d3664 | bytes 192 */

void FUN_088d3664(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined2 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = (undefined2 *)(param_2 + (param_5 + param_3) * 2);
  *(undefined2 *)(param_2 + (param_6 + param_3) * 2) = *puVar1;
  *puVar1 = 0xffff;
  iVar5 = 0;
  iVar4 = (param_4 - param_3) + 1;
  if (0 < iVar4) {
    piVar3 = (int *)(param_1 + (param_3 + param_6) * 4);
    piVar2 = (int *)(param_1 + (param_3 + param_5) * 4);
    do {
      if (*piVar3 != 0) {
        FUN_0887ba5c();
        *piVar3 = 0;
      }
      iVar5 = iVar5 + 1;
      *piVar3 = *piVar2;
      *piVar2 = 0;
      piVar3 = piVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}

