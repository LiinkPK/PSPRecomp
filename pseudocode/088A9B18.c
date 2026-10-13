/* Entry 0x088A9B18 | file offset 0x000A6AF0 | FUN_088a9b18 | bytes 224 */

void FUN_088a9b18(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x1c);
    piVar1 = DAT_089d6dc8;
    while (DAT_089d6dc8 = piVar1, iVar3 != 0) {
      if (iVar3 == 0) {
        iVar4 = *(int *)(param_1 + 0x1c);
      }
      else {
        iVar4 = *(int *)(iVar3 + 0x27c);
      }
      FUN_088a68b8(iVar3,3);
      iVar3 = iVar4;
      piVar1 = DAT_089d6dc8;
    }
    iVar3 = *piVar1;
    if ((iVar3 != 0) && (piVar1[1] != 0)) {
      iVar4 = *(int *)(param_1 + 0x34);
      if (param_1 == iVar3) {
        *piVar1 = iVar4;
        iVar3 = 0;
        iVar4 = piVar1[1];
      }
      else {
        iVar2 = *(int *)(iVar3 + 0x34);
        if (*(int *)(iVar3 + 0x34) == param_1) {
          *(int *)(iVar3 + 0x34) = iVar4;
        }
        else {
          do {
            iVar3 = iVar2;
            iVar2 = *(int *)(iVar3 + 0x34);
          } while (*(int *)(iVar3 + 0x34) != param_1);
          *(int *)(iVar3 + 0x34) = iVar4;
        }
        iVar4 = piVar1[1];
      }
      if (param_1 == iVar4) {
        piVar1[1] = iVar3;
      }
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_088a65e4(param_1);
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}

