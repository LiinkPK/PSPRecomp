/* Entry 0x08831DBC | file offset 0x0002ED94 | FUN_08831dbc | bytes 236 */

void FUN_08831dbc(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x394) + 0x84) + 4);
  iVar5 = 0;
  if (0 < iVar6) {
    iVar4 = 0;
    iVar3 = 0;
    do {
      piVar2 = (int *)(*(int *)(param_1 + 0x528) + iVar4);
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        if (iVar1 < 2) {
          if (0 < iVar1) {
            FUN_0886a9b0(*(int *)(param_1 + 0x394),iVar5,
                         (int)*(short *)(**(int **)(*(int *)(param_1 + 0x394) + 0x84) + iVar3 + 0x50
                                        ),0xffffffff);
            *(undefined4 *)(*(int *)(param_1 + 0x528) + iVar4) = 0;
          }
        }
        else if (iVar1 < 3) {
          *piVar2 = 1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x60;
    } while (iVar5 < iVar6);
  }
  return;
}

