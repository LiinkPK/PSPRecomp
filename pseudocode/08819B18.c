/* Entry 0x08819B18 | file offset 0x00016AF0 | FUN_08819b18 | bytes 116 */

undefined4
FUN_08819b18(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int param_6,
            int param_7)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if ((int *)*param_5 == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    *param_1 = *(int *)*param_5;
    iVar3 = *param_5 + 4;
    *param_5 = iVar3;
    *param_2 = iVar3;
    uVar1 = 0;
    piVar2 = (int *)(iVar3 + param_6 * *param_1);
    *param_5 = (int)piVar2;
    *param_3 = *piVar2;
    iVar3 = *param_5 + 4;
    *param_5 = iVar3;
    *param_4 = iVar3;
    *param_5 = iVar3 + param_7 * *param_3;
  }
  return uVar1;
}

