/* Entry 0x088B1B20 | file offset 0x000AEAF8 | FUN_088b1b20 | bytes 160 */

void FUN_088b1b20(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 0) {
    DAT_089d7288 = FUN_088820d8(param_2);
    FUN_08935524(DAT_089d7288,param_1,param_2);
    DAT_089d728c = DAT_089d7288 + 0x10;
    iVar1 = 0;
    iVar4 = 0;
    iVar2 = DAT_089d7288;
    if (0 < *(int *)(DAT_089d7288 + 8)) {
      do {
        iVar3 = *(int *)(DAT_089d728c + iVar4 + 8);
        if (iVar3 != 0) {
          *(int *)(DAT_089d728c + iVar4 + 8) = iVar2 + iVar3;
          iVar2 = DAT_089d7288;
        }
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + 0x10;
      } while (iVar1 < *(int *)(iVar2 + 8));
    }
  }
  return;
}

