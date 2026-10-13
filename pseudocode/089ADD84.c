/* Entry 0x089ADD84 | file offset 0x001AAD5C | FUN_089add84 | bytes 244 */

int FUN_089add84(int param_1,int param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    if (param_1 != param_2) {
      iVar2 = FUN_089adc5c(param_2,1);
      if (iVar2 == 0) {
        param_3 = 0;
      }
      FUN_089ac568(param_1);
      uVar1 = *(undefined2 *)(param_2 + 2);
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      *(undefined2 *)(param_1 + 2) = uVar1;
      uVar4 = 0;
      if (param_3 != 0) {
        uVar4 = 10;
        if ((param_3 & 0x10000) == 0) {
          uVar4 = 2;
        }
        if ((param_3 & 0x20000) != 0) {
          uVar4 = uVar4 | 0x10;
        }
        if ((param_3 & 0x40000) != 0) {
          uVar4 = uVar4 | 0x20;
        }
        if ((param_3 & 0x80000) != 0) {
          uVar4 = uVar4 | 0x40;
        }
      }
      uVar3 = FUN_089bc7d8(*(undefined4 *)(param_2 + 4),uVar4);
      *(undefined4 *)(param_1 + 4) = uVar3;
    }
    return param_1;
  }
  return 0;
}

