/* Entry 0x089B2C1C | file offset 0x001AFBF4 | FUN_089b2c1c | bytes 64 */

void FUN_089b2c1c(int *param_1,int *param_2,uint *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if (param_2 != (int *)0x0) {
    iVar2 = *param_2;
    if (iVar2 == 0) {
      param_1[3] = param_4;
      goto LAB_089b2c4c;
    }
    iVar1 = -4;
    if (param_3 != (uint *)0x0) {
      iVar1 = (*param_3 & 0xfffffffc) + iVar2;
    }
  }
  param_1[3] = param_4;
LAB_089b2c4c:
  param_1[1] = iVar2;
  param_1[2] = iVar1;
  *param_1 = iVar2;
  return;
}

