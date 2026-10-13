/* Entry 0x089040D8 | file offset 0x001010B0 | FUN_089040d8 | bytes 180 */

int FUN_089040d8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_089040a4(param_1,param_2);
  if (iVar1 != 0) {
    iVar4 = 0;
    iVar3 = param_1 + 8;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar2 = FUN_08935490(iVar1,iVar3,6);
        if (iVar2 == 0) {
          return iVar3;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x10;
      } while (iVar4 < *(int *)(param_1 + 4));
    }
  }
  return 0;
}

