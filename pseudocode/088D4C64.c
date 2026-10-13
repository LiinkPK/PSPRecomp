/* Entry 0x088D4C64 | file offset 0x000D1C3C | FUN_088d4c64 | bytes 412 */

void FUN_088d4c64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x10)) {
    iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
    iVar1 = FUN_0893486c(iVar3);
    iVar2 = *(int *)(param_1 + 0x18);
    if (iVar1 < iVar2) {
      if (iVar3 < 1) {
        iVar1 = 0;
        iVar3 = -iVar3;
        if (0 < iVar2) {
          iVar4 = iVar3 * param_6;
          iVar5 = 0;
          do {
            if (iVar3 <= iVar2 + -1) {
              FUN_088d3664(param_2,param_3,param_4,param_5,iVar4,iVar5);
              iVar2 = *(int *)(param_1 + 0x18);
            }
            iVar1 = iVar1 + 1;
            iVar5 = iVar5 + param_6;
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + param_6;
          } while (iVar1 < iVar2);
        }
      }
      else {
        iVar2 = iVar2 + -1;
        if (-1 < iVar2) {
          iVar1 = iVar2 * param_6;
          iVar3 = iVar2 - iVar3;
          iVar4 = iVar3 * param_6;
          do {
            if (-1 < iVar3) {
              FUN_088d3664(param_2,param_3,param_4,param_5,iVar4,iVar1);
            }
            iVar2 = iVar2 + -1;
            iVar3 = iVar3 + -1;
            iVar4 = iVar4 - param_6;
            iVar1 = iVar1 - param_6;
          } while (-1 < iVar2);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  }
  return;
}

