/* Entry 0x0899BB68 | file offset 0x00198B40 | FUN_0899bb68 | bytes 252 */

undefined4 FUN_0899bb68(int param_1,uint *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != (uint *)0x0)) && (2 < param_3 - 1U)) {
    uVar3 = *param_2;
    if (uVar3 == 0x2e47494d) {
      iVar1 = FUN_0899e998(param_2,param_3);
      uVar2 = 0;
      if (iVar1 != 0) {
        iVar1 = FUN_0899e9ec(param_2,param_3,param_4);
        uVar2 = 0;
        if (iVar1 != 0) {
          uVar2 = FUN_0899bc64(param_1,iVar1);
        }
      }
    }
    else if (uVar3 == 0x324d4954) {
      uVar2 = FUN_0899e4b0();
    }
    else if ((uVar3 & 0xffff) == 0x4d42) {
      uVar2 = FUN_0899d348();
    }
    else {
      uVar2 = FUN_0899def4();
    }
  }
  return uVar2;
}

