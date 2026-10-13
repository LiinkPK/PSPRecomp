/* Entry 0x08902B38 | file offset 0x000FFB10 | FUN_08902b38 | bytes 240 */

void FUN_08902b38(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = param_1 + 1;
  iVar3 = 0;
  do {
    iVar4 = 0;
    do {
      uVar1 = FUN_088b7dc0(puVar2,*param_1,iVar4);
      FUN_088b75e8(param_2,iVar3,iVar4,uVar1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xc);
    iVar4 = 0;
    do {
      iVar5 = 0;
      do {
        uVar1 = FUN_088b7df0(puVar2,*param_1,iVar4,iVar5);
        FUN_088b7618(param_2,iVar3,iVar4,iVar5,uVar1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    iVar3 = iVar3 + 1;
    puVar2 = (undefined4 *)((int)puVar2 + 0x1e);
  } while (iVar3 < 3);
  return;
}

