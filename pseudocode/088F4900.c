/* Entry 0x088F4900 | file offset 0x000F18D8 | FUN_088f4900 | bytes 184 */

int FUN_088f4900(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_088c51ac();
  iVar5 = iVar1;
  if (*(char *)(param_3 + 1) == '\x19') {
    iVar4 = 0;
    iVar5 = 0;
    if (0 < iVar1) {
      puVar3 = &DAT_089cccf8;
      do {
        iVar2 = FUN_088678a8(*puVar3);
        if (iVar2 == 0) {
          FUN_088f4894(param_2,iVar5,iVar1);
        }
        else {
          iVar5 = iVar5 + 1;
        }
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar4 < iVar1);
    }
  }
  return iVar5;
}

