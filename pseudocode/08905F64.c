/* Entry 0x08905F64 | file offset 0x00102F3C | FUN_08905f64 | bytes 200 */

undefined4 FUN_08905f64(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_4 != 0) {
    iVar4 = 0;
    iVar3 = param_1 + 4;
    if (0 < *(int *)(param_1 + 0x2c4)) {
      do {
        iVar1 = FUN_08935490(iVar3,param_4,6);
        if (iVar1 == 0) {
          uVar2 = FUN_08905958(iVar3,param_2,param_3);
          return uVar2;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x2c;
      } while (iVar4 < *(int *)(param_1 + 0x2c4));
    }
  }
  return 0;
}

