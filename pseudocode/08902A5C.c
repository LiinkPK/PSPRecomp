/* Entry 0x08902A5C | file offset 0x000FFA34 | FUN_08902a5c | bytes 220 */

void FUN_08902a5c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  param_1 = param_1 + 4;
  do {
    iVar3 = 0;
    do {
      uVar1 = FUN_088b7a88(param_2,iVar2,iVar3);
      FUN_088b7d94(param_1,iVar3,uVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    iVar3 = 0;
    do {
      iVar4 = 0;
      do {
        uVar1 = FUN_088b7ab8(param_2,iVar2,iVar3,iVar4);
        FUN_088b7da4(param_1,iVar3,iVar4,uVar1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 0x1e;
  } while (iVar2 < 3);
  return;
}

