/* Entry 0x08819AD0 | file offset 0x00016AA8 | FUN_08819ad0 | bytes 72 */

undefined4 FUN_08819ad0(int *param_1,int *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((int *)*param_3 == (int *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    *param_1 = *(int *)*param_3;
    iVar2 = *param_3 + 4;
    *param_3 = iVar2;
    *param_2 = iVar2;
    uVar1 = 0;
    *param_3 = iVar2 + param_4 * *param_1;
  }
  return uVar1;
}

