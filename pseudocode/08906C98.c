/* Entry 0x08906C98 | file offset 0x00103C70 | FUN_08906c98 | bytes 204 */

void FUN_08906c98(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  *param_1 = param_2;
  piVar2 = param_1 + 0x433;
  if (*(undefined4 **)(param_2 + 0x198) == (undefined4 *)0x0) {
    *(int **)(param_2 + 0x198) = piVar2;
    *(int **)(param_2 + 0x194) = piVar2;
    param_1[0x433] = 0;
  }
  else {
    **(undefined4 **)(param_2 + 0x198) = piVar2;
    param_1[0x433] = 0;
    *(int **)(param_2 + 0x198) = piVar2;
  }
  param_1[0x592] = param_3;
  param_1[0x593] = param_4;
  param_1[0x594] = param_5;
  param_1[0x595] = param_6;
  param_1[0x5b6] = 0;
  param_1[0x5b7] = 0;
  *(undefined1 *)((int)param_1 + 0x16e5) = 0;
  iVar4 = 0;
  param_1 = param_1 + 1;
  do {
    FUN_08905848(param_1);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *(undefined1 *)(param_1 + 0x18) = 0;
    iVar3 = 0;
    piVar1 = param_1 + 0xc;
    piVar2 = param_1;
    do {
      piVar2[2] = 0;
      piVar2[3] = 0;
      *piVar1 = 0;
      piVar1[1] = 0;
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 2;
      piVar2 = piVar2 + 2;
    } while (iVar3 < 5);
    iVar4 = iVar4 + 1;
    param_1 = param_1 + 0x20;
  } while (iVar4 < 0x10);
  return;
}

