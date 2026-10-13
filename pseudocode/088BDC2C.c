/* Entry 0x088BDC2C | file offset 0x000BAC04 | FUN_088bdc2c | bytes 148 */

void FUN_088bdc2c(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar1 = 0;
    for (iVar2 = (int)((param_2 - param_1) + ((uint)(param_2 - param_1 >> 2) >> 0x1e)) >> 2;
        iVar2 != 1; iVar2 = iVar2 >> 1) {
      iVar1 = iVar1 + 1;
    }
    FUN_088bddd0(param_1,param_2,0,iVar1 * 2,(int)param_3);
    FUN_088be3e0(param_1,param_2,(int)param_3);
  }
  return;
}

